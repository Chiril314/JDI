#include <iostream>

using namespace std;

int n, m;
int **grid;

void createGrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
}

void dfs(int x, int y) {
    if(x < 0 || x >= n || y >= m || y < 0)
        return;
    
    if(grid[x][y] == 0)           
        return;

    grid[x][y] = 0;

    dfs(x - 1, y);   // Up
    dfs(x, y + 1);   // Right
    dfs(x + 1, y);   // Down
    dfs(x, y - 1);   // Left
}

int main(){
    cin >> n >> m;

    createGrid();

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j] == 1){
                ans++;
                dfs(i, j);
            }

    cout << ans;

    return 0;
}