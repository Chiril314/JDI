#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, sx = -1, sy = -1, ex = -1, ey = -1;
    cin >> n >> m;

    vector<string> grid(n);
    vector<pair<int, int>> monster;
    vector<vector<int>> a(n, vector<int> (m));
    for(int i = 0; i < n; i++){
        cin >> grid[i];
        for(int j = 0; j < m; j++)
            if(grid[i][j] == 'A'){
                sx = i;
                sy = j;
                a[i][j] = 1e9;
            } else if(grid[i][j] == '#')
                a[i][j] = -1;
            else if(grid[i][j] == 'M'){
                monster.push_back({i, j});
                a[i][j] = 0;
            } else
                a[i][j] = 1e9;
    }

    queue<pair<int, int>> mQ;
    for(int i = 0; i < monster.size(); i++)
        mQ.push({monster[i].first, monster[i].second});
    
    while(!mQ.empty()){
        int x = mQ.front().first, y = mQ.front().second;
        mQ.pop();

        int d = a[x][y];
        if(x + 1 < n && grid[x + 1][y] != '#' && a[x][y] + 1 < a[x + 1][y]){
            a[x + 1][y] = d + 1;
            mQ.push({x + 1, y});
        } if(x - 1 >= 0 && grid[x - 1][y] != '#' && a[x][y] + 1 < a[x - 1][y]){
            a[x - 1][y] = d + 1;
            mQ.push({x - 1, y});
        } if(y + 1 < m && grid[x][y + 1] != '#' && a[x][y] + 1 < a[x][y + 1]){
            a[x][y + 1] = d + 1;
            mQ.push({x, y + 1});
        } if(y - 1 >= 0 && grid[x][y - 1] != '#' && a[x][y] + 1 < a[x][y - 1]){
            a[x][y - 1] = d + 1;
            mQ.push({x, y - 1});
        }
    }

    queue<pair<pair<int, int>, int>> q;
    q.push({{sx, sy}, 0});
    grid[sx][sy] = '!';

    while(!q.empty()){
        int x = q.front().first.first, y = q.front().first.second, d = q.front().second;
        q.pop();
        
        if(x + 1 < n && grid[x + 1][y] == '.' && d + 1 < a[x + 1][y]){
            grid[x + 1][y] = 'D';
            q.push({{x + 1, y}, d + 1});
        } else if(x + 1 == n){
            ex = x;
            ey = y;
            break;
        }

        if(x - 1 >= 0 && grid[x - 1][y] == '.' && d + 1 < a[x - 1][y]){
            grid[x - 1][y] = 'U';
            q.push({{x - 1, y}, d + 1});
        } else if(x - 1 < 0){
            ex = x;
            ey = y;
            break;
        }

        if(y + 1 < m && grid[x][y + 1] == '.' && d + 1 < a[x][y + 1]){
            grid[x][y + 1] = 'R';
            q.push({{x, y + 1}, d + 1});
        } else if(y + 1 == m){
            ex = x;
            ey = y;
            break;
        }

        if(y - 1 >= 0 && grid[x][y - 1] == '.' && d + 1 < a[x][y - 1]){
            grid[x][y - 1] = 'L';
            q.push({{x, y - 1}, d + 1});
        } else if(y - 1 < 0){
            ex = x;
            ey = y;
            break;
        }
    }

    //for(int i = 0; i < n; i++){
    //    for(int j = 0; j < m; j++)
    //        cout << a[i][j] << ' ';
    //    cout << endl;
    //}
    
    if(ex == -1 && ey == -1){
        cout << "NO";
        return 0;
    }

    string ans;
    while(grid[ex][ey] != '!'){
        ans.push_back(grid[ex][ey]);
        if(grid[ex][ey] == 'U')
        ex++;
        else if(grid[ex][ey] == 'D')
        ex--;
        else if(grid[ex][ey] == 'L')
        ey++;
        else if(grid[ex][ey] == 'R')
        ey--;
    }

    reverse(ans.begin(), ans.end());
    cout << "YES\n" << ans.size() << "\n" << ans;


    return 0;
}