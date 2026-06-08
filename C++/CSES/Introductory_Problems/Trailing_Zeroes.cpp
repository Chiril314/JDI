#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    while(n > 0){
        n /= 5;
        ans += n;
    }

    cout << ans;

    return 0;
}