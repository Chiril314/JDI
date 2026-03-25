#include <iostream>
#include <queue>

using namespace std;

char **grid;
int n, m, xt, yt;

void init(){
    grid = new char*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new char[m];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'v'){
                xt = i;
                yt = j;
            }
        }
}

void flow(){
    queue<pair<int, int>> q;
    if(xt + 1 < n && grid[xt + 1][yt] == 'c'){
        q.push({xt + 1, yt});
        grid[xt + 1][yt] = 'l';
    }

    if(xt - 1 >= 0 && grid[xt - 1][yt] == 'c'){
        q.push({xt - 1, yt});
        grid[xt - 1][yt] = 'l';
    }

    if(yt + 1 < m && grid[xt][yt + 1] == 'c'){
        q.push({xt, yt + 1});
        grid[xt][yt + 1] = 'l';
    }

    if(yt - 1 >= 0 && grid[xt][yt - 1] == 'c'){
        q.push({xt, yt - 1});
        grid[xt][yt - 1] = 'l';
    }
    
    while(!q.empty()){
        pair<int, int> c = q.front();
        q.pop();

        if(c.first + 1 < n && grid[c.first + 1][c.second] == 'c'){
            q.push({c.first + 1, c.second});
            grid[c.first + 1][c.second] = 'l';
        }

        if(c.first - 1 >= 0 && grid[c.first - 1][c.second] == 'c'){
            q.push({c.first - 1, c.second});
            grid[c.first - 1][c.second] = 'l';
        }
        if(c.second + 1 < m && grid[c.first][c.second + 1] == 'c'){
            q.push({c.first, c.second + 1});
            grid[c.first][c.second + 1] = 'l';
        }

        if(c.second - 1 >= 0 && grid[c.first][c.second - 1] == 'c'){
            q.push({c.first, c.second - 1});
            grid[c.first][c.second - 1] = 'l';
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    init();
    flow();

    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j] == 'c')
                cnt++;
    
    cout << cnt;

    return 0;
}