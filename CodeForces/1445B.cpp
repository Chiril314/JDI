#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << max(c + d, a + b) << endl;
    }

    return 0;
}