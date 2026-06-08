#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> dx = {2, 2, -2, -2, 1, 1, -1, -1}, dy = {1, -1, 1, -1, 2, -2, 2, -2};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n, 1e9));

    queue<pair<int,int>> q;
    dist[0][0] = 0;
    q.push({0, 0});

    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++){
            int nx = x + dx[i], ny = y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) 
                continue;
            
            if(dist[nx][ny] != 1e9) 
                continue;

            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << dist[i][j] << ' ';
        cout << "\n";
    }

    return 0;
}