#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<vector<int>> &grid, int x, int y, int n, int m, int &sum){
    if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == 0)
        return;
    
    sum += grid[x][y];

    grid[x][y] = 0;
    dfs(grid, x + 1, y, n, m, sum);
    dfs(grid, x - 1, y, n, m, sum);
    dfs(grid, x, y + 1, n, m, sum);
    dfs(grid, x, y - 1, n, m, sum);

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> grid[i][j];

        int ans = 0, sum;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                if(grid[i][j] != 0){
                    sum = 0;
                    dfs(grid, i, j, n, m, sum);
                    ans = max(ans, sum);
                }
            }

        cout << ans << endl;
    }

    return 0;
}