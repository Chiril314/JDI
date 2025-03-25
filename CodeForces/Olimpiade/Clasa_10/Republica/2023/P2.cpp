#include <iostream>
#include <vector>

using namespace std;

int n, m, ans = 0, cnt;
char **grid;

void createGrid(){
    grid = new char*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new char[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
}

void diamondCheck(pair<int, int> pos, int size){
    int cnt1 = 0, x = pos.first, y = pos.second;
    for(int i = 0; i < size; i++){
        if(i == 0){
            if(x-size >= 0 && y-size >= 0 && x+size < n && y+size < m)
                if(grid[x][y-size] == '#' && grid[x][y+size] == '#' && grid[x+size][y] == '#' && grid[x-size][y] == '#')
                    cnt1++;
        } else{
            if(x-size+i >= 0 && y-i >= 0 && x+size-i < n && y+i < m)
                if(grid[x-size+i][y-i] == '#' && grid[x-size+i][y+i] == '#' && grid[x+size-i][y-i] == '#' && grid[x+size-i][y+i] == '#')
                    cnt1++;
        }
    }

    if(cnt1 == size){
        ans++;
        return;
    } else{
        int cnt2 = 0, temp = size-1;
        for(int i = 0; i < temp; i++){
            if(i == 0){
                if(x-temp >= 0 && y-temp >= 0 && x+temp < n && y+temp < m)
                    if(grid[x][y-temp] == '.' && grid[x][y+temp] == '.' && grid[x+temp][y] == '.' && grid[x-temp][y] == '.')
                        cnt2++;
            } else{
                if(x-temp+i >= 0 && y-i >= 0 && x+temp-i < n && y+i < m)
                    if(grid[x-temp+i][y-i] == '.' && grid[x-temp+i][y+i] == '.' && grid[x+temp-i][y-i] == '.' && grid[x+temp-i][y+i] == '.')
                        cnt2++;
            }
        }

        if(cnt2 == temp-1)
            diamondCheck(pos, size+1);
        else    
            return;
    }
}

int main(){
    cin >> n >> m;

    createGrid();

    for(int i = 1; i < n - 1; i++){
        for(int j = 1; j < m - 1; j++){
            if(grid[i][j] == '.'){
                diamondCheck({i, j}, 1);
            }
        }
    }

    cout << ans;

    for(int i = 0; i < n; i++)
        delete[] grid[i];
    delete[] grid;

    return 0;
}