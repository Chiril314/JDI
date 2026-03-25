#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, t;
    cin >> n >> k >> t;

    if(t <= k)
        cout << t;
    else if(t <= n)
        cout << k;
    else
        cout << n + k - t;

    return 0;
}