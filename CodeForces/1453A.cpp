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
        int n, m;
        cin >> n >> m;

        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            s.insert(x);
        }

        int ans = 0;
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;

            ans += (s.find(x) != s.end());
        }

        cout << ans << endl;
    }

    return 0;
}   