#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long ans = 1;
        while(n != 1){
            ans += n;
            n /= 2;
        }   

        cout << ans << endl;
    }

    return 0;
}