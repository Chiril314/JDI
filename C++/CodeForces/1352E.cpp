#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<bool> ans(n + 1, false);
        vector<int> check(n + 1, 0);

        for(int i = 1; i <= n; i++){
            check[i] = check[i - 1] + a[i - 1];
        }

        for(int i = 0; i < n; i++){
            for(int l = i + 1; l < n; l++){
                int sum = check[l + 1] - check[i];
                if(sum <= n){
                    ans[sum] = true;
                }
            }
        }

        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(ans[a[i]]){
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}