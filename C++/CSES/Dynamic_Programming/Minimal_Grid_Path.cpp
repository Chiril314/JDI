#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<string> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
        
    int l = 2 * n - 1;
    string ans(l, 'Z');

    queue<pair<int,int>> q;
    q.push({0, 0});
    ans[0] = a[0][0];

    vector<vector<int>> used(n, vector<int>(n, 0));
    int stamp = 1;

    for(int k = 1; k < l; k++){
        vector<pair<int,int>> cand;
        cand.reserve((int)q.size() * 2);
        
        char best = '{';
        while(!q.empty()){
            int x = q.front().first, y = q.front().second;
            q.pop();

            if(x + 1 < n)
                cand.push_back({x + 1, y});
            if(y + 1 < n)
                cand.push_back({x, y + 1});
        }

        for(int i = 0; i < (int)cand.size(); i++){
            int nx = cand[i].first, ny = cand[i].second;
            if(a[nx][ny] < best)
                best = a[nx][ny];
        }

        ans[k] = best;

        stamp++;
        for(int i = 0; i < (int)cand.size(); i++){
            int nx = cand[i].first, ny = cand[i].second;
            if(a[nx][ny] == best && used[nx][ny] != stamp){
                used[nx][ny] = stamp;
                q.push({nx, ny});
            }
        }
    }

    cout << ans;

    return 0;
}