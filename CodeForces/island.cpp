#include <iostream>

using namespace std;

int n, m, islands = 0;
vector<vector<int>> grid;

void input(int n, int m) {
    vector<int> line;
    int k;
    for(int i = 0; i < n; i++) {
        line.clear();
        for(int j = 0; j < m; j++) { 
            cin >> k;
            line.push_back(k);
        }
        grid.push_back(line);
    }    
}


void dfs(int x, int y) {
    if (x < 0 || x >= grid[0].size() || y >= grid.size() || y < 0)
        return;
    
    if(grid[x][y] == 0)           
        return;

    grid[x][y] = 0;

    dfs(x-1, y);   // Up
    dfs(x, y+1);   // Right
    dfs(x+1, y);   // Down
    dfs(x, y-1);   // Left
}

int main() {
    cin >> n >> m;

    input(n, m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1) {
                islands++;
                dfs(i, j);
            }
        }
    }

    cout << islands;

    return 0;
}