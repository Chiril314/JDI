#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(pow(2, i) <= n)
            ans++;
        else
            break;
    }

    cout << ans + 1;

    return 0;
}