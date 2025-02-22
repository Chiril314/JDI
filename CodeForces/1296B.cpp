#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n, ans;
        cin >> n;

        if(n % 9 == 0)
            ans = n + (n / 9) - 1;
        else
            ans = n + (n / 9);

        cout << ans << endl;
    }
    
    return 0;
}