#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n - k - 1; i++)
        cout << i << ' ';
    
    for(int i = n; i >= n - k; i--)
        cout << i << ' ';

    return 0;
}