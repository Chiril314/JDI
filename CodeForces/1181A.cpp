#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, n;
    cin >> a >> b >> n;

    cout << (a + b) / n << ' ';

    a %= n;
    b %= n;
    
    if(a + b >= n)
        cout << n - max(a, b);
    else
        cout << 0;

    return 0;
}