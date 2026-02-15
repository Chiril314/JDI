#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long a, b, k;
        cin >> a >> b >> k;

        cout << a * ((k + 1) / 2) - b * (k / 2) << endl;
    }

    return 0;
}