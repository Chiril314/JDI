#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m;
    cin >> m;

    int n, ans = 0;
    cin >> n;

    vector<vector<int>> cnt(m + 1, vector<int>(m + 1, 0)), a(m + 1);
    for(int i = 0; i < m + 1; i++)
        for(int j = i; j < m + 1; j++)
            cnt[i][j] = cnt[j][i] = 1;

    for(int k = 0; k < n; k++){
        int i, j;
        cin >> i >> j;
        cnt[i][j] = cnt[j][i] = 0;
    }

    vector<int> d(m + 1, 0);
    for(int i = 0; i < m + 1; i++)
        for(int j = i; j < m + 1; j++)
            if(cnt[i][j]){
                if(i == j)
                    d[i] += 2;
                else{
                    d[i]++;
                    d[j]++;
                    a[i].push_back(j);
                    a[j].push_back(i);
                }
            }
            
    vector<int> v(m + 1, 0);
    for(int i = 0; i < m + 1; i++)
        if(!v[i]){
            queue<int> q;
            q.push(i);
            v[i] = 1;

            vector<int> c;
            bool flag = false;

            while(!q.empty()){
                int u = q.front();
                q.pop();

                c.push_back(u);
                if(d[u] > 0)
                    flag = true;

                for(int val : a[u])
                    if(!v[val]){
                        v[val] = 1;
                        q.push(val);
                    }
            }

            if(!flag)
                continue;
            
            int cn = 0;
            for(int u : c)
                if(d[u] % 2 == 1)
                    cn++;

            if(cn == 0)
                ans++;
            else
                ans += cn / 2;
        }

    cout << ans;

    return 0;
}