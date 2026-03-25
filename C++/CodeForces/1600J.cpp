#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int **grid;
int ***wallMap;
bool **visited;

void initGrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];

    visited = new bool*[n];
    for(int i = 0; i < n; i++)
        visited[i] = new bool[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            visited[i][j] = false;
        }

    return;
}

void initWallMap(){
    wallMap = new int**[n];
    for(int i = 0; i < n; i++){
        wallMap[i] = new int*[m];
        for(int j = 0; j < m; j++){
            wallMap[i][j] = new int[4];
            for(int k = 0; k < 4; k++)
                wallMap[i][j][k] = 0;
        }
    }

    return;
}

void buildMap(){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            int v = grid[i][j];
            if(v >= 8){
                wallMap[i][j][0] = 1;
                v -= 8;
            } 
            
            if(v >= 4){
                wallMap[i][j][1] = 1;
                v -= 4;
            }

            if(v >= 2){
                wallMap[i][j][2] = 1;
                v -= 2;
            }

            if(v >= 1){
                wallMap[i][j][3] = 1;
                v--;
            }
        }

    return;
}

int dfs(int x, int y){
    visited[x][y] = true;
    int ans = 1;

    if(wallMap[x][y][0] == 0 && x > 0 && wallMap[x - 1][y][2] == 0 && !visited[x - 1][y])
        ans += dfs(x - 1, y);

    if(wallMap[x][y][1] == 0 && y + 1 < m && wallMap[x][y + 1][3] == 0 && !visited[x][y + 1])
        ans += dfs(x, y + 1);

    if(wallMap[x][y][2] == 0 && x + 1 < n && wallMap[x + 1][y][0] == 0 && !visited[x + 1][y])
        ans += dfs(x + 1, y);

    if(wallMap[x][y][3] == 0 && y > 0 && wallMap[x][y - 1][1] == 0 && !visited[x][y - 1])
        ans += dfs(x, y - 1);

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    initGrid();
    initWallMap();
    buildMap();

    vector<int> ans;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(!visited[i][j]){
                int s = dfs(i, j);
                ans.push_back(s);
            }

    sort(ans.rbegin(), ans.rend());
    for(int i = 0; i < ans.size(); i++) 
        cout << ans[i] << ' ';

    return 0;
}