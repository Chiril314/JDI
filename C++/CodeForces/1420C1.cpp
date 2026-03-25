#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n), v;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        bool flag = true;
        for(int i = 0; i < n - 1; i++)
            if(a[i] > a[i + 1] && flag){
                flag = false;
                v.push_back(a[i]);
            } else if(a[i] < a[i + 1] && !flag){
                flag = true;
                v.push_back(a[i]);
            }

        if(v.size() % 2 == 0)
            v.push_back(a[n - 1]);

        long long ans = 0;
        for(int i = 0; i < v.size(); i++)
            if(i % 2 == 0)
                ans += v[i];
            else
                ans -= v[i];

        cout << ans << endl;
    }v

    return 0;
}