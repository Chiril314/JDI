#include <iostream>
#include <vector>

using namespace std;

int n, m, MAX_SUM = 0;
int** grid;
vector<pair<int, int>> PATH;

void createGrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
}

void dfs(pair<int, int> pos, int sum, vector<pair<int, int>> coords) {
    int x = pos.first, y = pos.second;
    coords.push_back(pos);
    
    // Base case: if we have reached the bottom row,
    // update the max sum and record the path.
    if(x == n - 1 || (grid[x+1][y+1] == 0 && grid[x+1][y] == 0 && grid[x+1][y-1] == 0)) {
        if(sum > MAX_SUM) {
            MAX_SUM = sum;
            PATH = coords;
        }
        return;
    }
    
    if(x+1 < n && y+1 < m && grid[x+1][y+1] != 0)
        dfs({x+1, y+1}, sum + grid[x+1][y+1], coords);
    
    if(x+1 < n && grid[x+1][y] != 0)
        dfs({x+1, y}, sum + grid[x+1][y], coords);
    
    if(x+1 < n && y-1 >= 0 && grid[x+1][y-1] != 0)
        dfs({x+1, y-1}, sum + grid[x+1][y-1], coords);
}

int main(){
    cin >> n >> m;

    createGrid();
    vector<int> price(n);
    for(int i = 0; i < n; i++)
        cin >> price[i];

    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i > 0 && j > 0 && j < m-1) {
                if(grid[i][j] != 0 && (grid[i-1][j-1] == 0 || grid[i-1][j] == 0 || grid[i-1][j+1] == 0))
                    dfs({i, j}, grid[i][j], v);
            } else if(i > 0 && j == 0) {
                if(grid[i][j] != 0 && (grid[i-1][j] == 0 || grid[i-1][j+1] == 0))
                    dfs({i, j}, grid[i][j], v);
            }  else if(i > 0 && j == m-1) {
                if(grid[i][j] != 0 && (grid[i-1][j-1] == 0 || grid[i-1][j] == 0))
                    dfs({i, j}, grid[i][j], v);                
            } else if(i == 0)
                dfs({i, j}, grid[i][j], v);
        }
    }

    int cost = 0;
    for(int i = 0; i < PATH.size(); i++)
        cost += price[i] * grid[PATH[i].first][PATH[i].second];

    cout << MAX_SUM << endl << cost;
    for(int i = 0 ; i < PATH.size(); i++)
        cout << endl << PATH[i].first+1 << ' ' << PATH[i].second+1;

    for(int i = 0; i < n; i++)
        delete[] grid[i];
    delete[] grid;

    return 0;
}

//          ./run Olimpiade/Clasa_10/Republica/2023/P5.cpp