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
        int n, k;
        cin >> n >> k;

        vector<int> x(n), y(n);
        for(int i = 0; i < n; i++)
            cin >> x[i] >> y[i];

        int ans = -1;
        for(int i = 0; i < n; i++){
            bool flag = true;
            for(int j = 0; j < n; j++)
                if(abs(x[i] - x[j]) + abs(y[i] - y[j]) > k){
                    flag = false;
                    break;
                }
            
            if(flag){
                ans = 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}