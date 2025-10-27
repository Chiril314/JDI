#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, ans = 0;
        cin >> n;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            if(x == 0)
                ans = x;
            else
                ans = max(ans, x);
        }

        cout << ans << endl;
    }

    return 0;
}