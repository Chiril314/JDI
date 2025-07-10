#include <iostream>

using namespace std;

int h, w;
char **a;
bool ans = true;

void createGrid(){
    a = new char*[h];
    for(int i = 0; i < h; i++)
        a[i] = new char[w];

    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            cin >> a[i][j];
}

void checkGrid(){   
    int cnt = 0;
    bool check = false;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] == '*'){
                ans = false;
                return;
            }

            if(a[i][j] == '#'){
                cnt++;
            }
        }
    }

    if(cnt == 0)
        ans = false;
}

void dfs_up(int posX, int posY){
    if(posX < 0 || a[posX][posY] == '.')
        return;

    a[posX][posY] = '#';

    dfs_up(posX-1, posY);
}

void dfs_right(int posX, int posY){
    if(posY > w-1 || a[posX][posY] == '.')
        return;

    a[posX][posY] = '#';

    dfs_right(posX, posY+1);
}

void dfs_down(int posX, int posY){
    if(posX > h-1 || a[posX][posY] == '.')
        return;

    a[posX][posY] = '#';

    dfs_down(posX+1, posY);
}    

void dfs_left(int posX, int posY){
    if(posY < 0 || a[posX][posY] == '.')
        return;

    a[posX][posY] = '#';

    dfs_left(posX, posY-1);
}

int main(){
    cin >> h >> w;
    createGrid();

    bool flag = false;
    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            if(i > 0 && j > 0 && i < h-1 && j < w-1)
                if(a[i][j] == '*' && a[i+1][j] == '*' && a[i-1][j] == '*' && a[i][j+1] == '*' && a[i][j-1] == '*')
                    if(!flag){
                        dfs_up(i-1, j);
                        dfs_right(i, j+1);
                        dfs_down(i+1, j);
                        dfs_left(i, j-1);

                        a[i][j] = '#';
                        flag = true;
                    }

    checkGrid();
    if(!ans)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}