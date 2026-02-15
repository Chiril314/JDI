#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k, a;
        cin >> n >> k;

        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> a;
            s.insert(a);
        }

        if(k <= 1 && s.size() > 1){
            cout << -1 << endl;
            continue;
        }

        if(k >= s.size()){
            cout << 1 << endl;
            continue;
        }

        int ans = s.size() - k;
        ans = (ans + k - 2) / (k - 1) + 1;

        cout << ans << endl;
    }

    return 0;
}