#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;

    cout << (n + ((n - 1) / (k - 1))) * m;

    return 0;
}