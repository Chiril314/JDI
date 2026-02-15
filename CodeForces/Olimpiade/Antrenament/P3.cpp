#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    vector<int> r(n, 0);
    for(int i = 0; i < n; i++){
        cin >> r[i];
        r[i] = pow(r[i], 2);
    }

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        double z = pow(x, 2) + pow(y, 2);
        for(int i = 0; i < n; i++){
            if(z < r[i]){
                if(i == 0)
                    ans += (2 * n);
                else
                    ans += (2 * (n - i));
                
                break;
            } else if(z == r[i]){
                ans += (2 * (n - (i + 1) + 1) - 1);
                break;
            }
        }
    }

    cout << ans;

    return 0;
}