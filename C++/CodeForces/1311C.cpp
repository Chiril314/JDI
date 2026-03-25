#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        vector<int> p(m);
        for(int i = 0; i < m; ++i){
            cin >> p[i];
            p[i]--;
        }

        vector<int> cnt(n + 1, 0);

        cnt[0]++; 
        for(int i = 0; i < m; i++){
            cnt[0]++;
            cnt[p[i] + 1]--;
        }

        vector<int> presses(n, 0);

        presses[0] = cnt[0];
        for(int i = 1; i < n; i++)
            presses[i] = presses[i - 1] + cnt[i];

        vector<long long> ans(26, 0);
        for(int i = 0; i < n; ++i)
            ans[s[i] - 'a'] += presses[i];

        for(int i = 0; i < 26; ++i)
            cout << ans[i] << ' ';

        cout << endl;
    }
    
    return 0;
}