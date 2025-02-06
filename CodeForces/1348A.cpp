#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n >= 4){
            int ans = pow(2, n);
            for(int i = 1; i <= (n / 2) - 1; i++){
                ans += pow(2, i);
            }

            for(int i = n / 2; i < n; i++){
                ans -= pow(2, i);
            }

            cout << ans << endl;
        } else{
            cout << 2 << endl; 
        }
    }

    return 0;
}