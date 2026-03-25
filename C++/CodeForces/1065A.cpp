#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long s, a, b, c;
        cin >> s >> a >> b >> c;

        long long check = s / c;
        long long ans = check;
        ans += ((check / a) * b);

        cout << ans << endl;
    }

    return 0;
}