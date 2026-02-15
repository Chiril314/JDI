#include <iostream>
#include <vector>

using namespace std;

void f(vector<bool> &r, vector<int> &cnt, vector<int> &p, int &n, string &s, vector<int> &c){
    if(!r[n]){
        r[n] = true;
        c.push_back(n);
    } else if(r[n])
        return;
    
    if(s[n] == '0')
        cnt[c[0]]++;
    
    n = p[n];
    f(r, cnt, p, n, s, c);

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, idx;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
            p[i]--;
        }

        string s;
        cin >> s;

        vector<int> cnt(n, 0);
        vector<bool> done(n, false);
        for(int i = 0; i < n; i++){
            if(done[i])
                continue;

            vector<int> c;
            vector<bool> r(n, false);

            idx = i;
            f(r, cnt, p, idx, s, c);

            for(int j = 1; j < c.size(); j++){
                cnt[c[j]] = cnt[c[0]];
                done[c[j]] = true;
            }
        }

        for(int i = 0; i < n; i++)
            cout << cnt[i] << ' ';
        
        cout << endl;
    }

    return 0;
}