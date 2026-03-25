#include <iostream>

using namespace std;

int n, m, q;
int **grid;
vector<int> ans;

void createGrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    ans.resize(q);
    for(int i = 0; i < q; i++)
        ans[i] = 0;
}

void dfs(int x, int y, int check){
    if(x < 0 || x >= n || y >= m || y < 0)
        return;
    
    if(grid[x][y] != check)           
        return;

    grid[x][y] = 0;

    dfs(x - 1, y, check);   // Up
    dfs(x, y + 1, check);   // Right
    dfs(x + 1, y, check);   // Down
    dfs(x, y - 1, check);   // Left
}

int main(){
    cin >> n >> m >> q;

    createGrid();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j] != 0){
                ans[grid[i][j] - 1]++;
                dfs(i, j, grid[i][j]);
            }

    for(int i = 0; i < q; i++)
        cout << ans[i] << ' ';

    return 0;
}