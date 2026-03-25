#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n, a, b;
        cin >> n >> a >> b;

        long long ans = 0;
        if(2 * a < b){
            ans += n * a;
        } else{
            ans += (n / 2) * b;
            if(n % 2 == 1){
                ans += a;
            }
        }

        cout << ans << endl;
    }

    return 0;
}