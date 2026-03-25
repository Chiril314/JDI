#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;

        if(a / b == n && a % b == 0){
            cout << 1 << endl;
            continue;
        }

        if(n * b < a){
            cout << 1 << endl;
            continue;
        }

        if(b >= a)
            cout << 1 << endl;
        else   
            cout << 2 << endl;
    }

    return 0;
}