#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, sx = -1, sy = -1, ex = -1, ey = -1;
    cin >> n >> m;
    
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        for(int j = 0; j < m; j++)
            if(a[i][j] == 'A'){
                sx = i;
                sy = j;
            } else if(a[i][j] == 'B'){
                ex = i;
                ey = j;
            }
    }

    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<char>> par(n, vector<char>(m, 0));

    queue<pair<int,int>> q;
    q.push({sx, sy});
    vis[sx][sy] = 1;


    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();

        if(x + 1 < n && !vis[x + 1][y] && a[x + 1][y] != '#'){
            vis[x + 1][y] = 1;
            par[x + 1][y] = 'D';
            q.push({x + 1, y});
        } if(x - 1 >= 0 && !vis[x - 1][y] && a[x - 1][y] != '#'){
            vis[x - 1][y] = 1;
            par[x - 1][y] = 'U';
            q.push({x - 1, y});
        } if(y + 1 < m && !vis[x][y + 1] && a[x][y + 1] != '#'){
            vis[x][y + 1] = 1;
            par[x][y + 1] = 'R';
            q.push({x, y + 1});
        } if(y - 1 >= 0 && !vis[x][y - 1] && a[x][y - 1] != '#'){
            vis[x][y - 1] = 1;
            par[x][y - 1] = 'L';
            q.push({x, y - 1});
        }
    }

    if(!vis[ex][ey]){
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    string ans;
    int x = ex, y = ey;

    while(x != sx || y != sy){
        char d = par[x][y];
        ans.push_back(d);

        if(d == 'D') 
            x--;
        else if(d == 'U') 
            x++;
        else if(d == 'R') 
            y--;
        else if(d == 'L') 
            y++;
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n" << ans;

    return 0;
}