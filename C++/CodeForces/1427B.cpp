#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, k, h = 0, d = 0, ans = 0;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<long long> a;
        bool flag = true;

        for(long long i = 0; i < n; i++){
            h += (s[i] == 'L');
            if(s[i] == 'W')
                flag = false;
            
            if(!flag && s[i] == 'L')
                d++;
            
            if(s[i] == 'W'){
                if(s[i - 1] == 'W' && i > 0)
                    ans += 2;
                else
                    ans++;
                
                if(!d)
                    continue;

                a.push_back(d);
                d = 0;
            }
        }

        if(!ans && k){
            cout << (k - 1) * 2 + 1 << endl;
            continue;
        }

        sort(a.begin(), a.end());
        for(long long i = 0; i < a.size(); i++){
            if(k < a[i])
                break;
            
            ans += a[i] * 2 + 1;
            k -= a[i];
            h -= a[i];
        }

        if(k > h){
            cout << (n - 1) * 2 + 1 << endl;
            continue;
        } else  
            ans += k * 2;
        
        cout << ans << endl;
    }
    
    return 0;
}