#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;

        long long ans = (k * y + k - 1) / (x - 1) + k;
        if((k * y + k - 1) % (x - 1))
            ans++;

        cout << ans << endl;
    }

    return 0;
}