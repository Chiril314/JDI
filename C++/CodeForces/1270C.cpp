#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, a, x = 0, s = 0;
        cin >> n;

        for(long long i = 0; i < n; i++){
            cin >> a;

            s += a;
            x ^= a;
        }

        cout << 2 << endl << x << ' ' << s + x << endl;
    }

    return 0;
}