#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long k = 0;
    for(long long i = 1; i <= n; i++){
        if(i == 1)
            cout << 0 << endl;
        else{
            long long ans = ((i * i) * ((i * i) - 1)) / 2;

            ans -= (8 * k);
            cout << ans << endl;
            k += (i - 1);
        }
    }

    return 0;
}