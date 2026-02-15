#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        vector<long long> done(n, 0);
        vector<vector<int>> r(n);

        queue<int> q;
        for(int i = 0; i < n; i++){
            long long j = i + a[i];
            if(j >= n){
                done[i] = 1;
                q.push(i);
            } else
                r[j].push_back(i);
        }

        while(!q.empty()){
            int c = q.front();
            q.pop();

            for(int i = 0; i < r[c].size(); i++){
                int p = r[c][i];
                if(done[p])
                    continue;
                
                b[p] += b[c];
                done[p] = 1;
                q.push(p);
            }
        }

        long long ans = 0;
        for(int i = 0; i < n; i++)
            ans = max(ans, b[i]);

        cout << ans << endl;
    }

    return 0;
}