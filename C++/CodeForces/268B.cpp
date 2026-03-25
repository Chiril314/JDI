#include <iostream>

using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;

    ans += (n - 1);
    ans += n;

    for(int i = 1; i < n - 1; i++){
        ans += (n - i) * i;
    }

    cout << ans;

    return 0;
}