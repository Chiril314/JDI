#include <iostream>

using namespace std;

int n, m, s1, s2, e1, e2;
bool check = false;
char **map;

void initmap(){
    map = new char*[n];
    for(int i = 0; i < n; i++){
        map[i] = new char[m];
        for(int j = 0; j < m; j++){
            cin >> map[i][j];   
            if(map[i][j] == 'S'){
                s1 = i;
                s2 = j;
            } else if(map[i][j] == 'E'){
                e1 = i;
                e2 = j;
            }
        }
    }
}

void print(){
    cout << "Solution: ";
    for(int i = 0; i < n; i++){
        cout << endl;
        for(int j = 0; j < m; j++)
            cout << map[i][j] << ' ';
    }

    return;
}


void back(int x, int y){
    if(check)
        return;
        
    if(x < 0 || x >= n || y < 0 || y >= m)
        return;

    if(map[x][y] == '#' || map[x][y] == '*')
        return;
    
    if(x == e1 && y == e2){
        map[s1][s2] = 'S';
        map[x][y] = 'E';
        check = true;
        print();
        return;
    }

    char t = map[x][y];
    map[x][y] = '*';

    back(x + 1, y);
    back(x - 1, y);
    back(x, y + 1);
    back(x, y - 1);

    map[x][y] = t;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    initmap();
    back(s1, s2);

    if(!check)
        cout << "No solution";

    return 0;
}