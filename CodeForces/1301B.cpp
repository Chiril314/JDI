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
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> v;
        for(int i = 0; i < n; i++)
            if(a[i] == -1){
                if(i - 1 >= 0 && a[i - 1] != -1)
                    v.push_back(a[i - 1]);
                if(i + 1 < n && a[i + 1] != -1)
                    v.push_back(a[i + 1]);
            }

        if(v.empty()){
            cout << "0 0" << endl;
            continue;
        }

        sort(v.begin(), v.end());
        
        int ans1 = 0, ans2 = (v[0] + v.back()) / 2;
        for(int i = 0; i < n; i++){
            if(a[i] == -1)
                a[i] = ans2;
            if(i)
                ans1 = max(ans1, abs(a[i] - a[i - 1]));
        }

        cout << ans1 << ' ' << ans2 << endl;
    }

    return 0;
}