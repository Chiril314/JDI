#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k;
    cin >> k;

    int n = k;
    k = k / 2 + 1;

    cout << k << endl;
    for(int i = 1; i <= k; i++) 
        cout << 1 << ' ' << i << endl;
    
    for(int i = 2; i <= n - k + 1; i++)
        cout << k << ' ' << i << endl;

    return 0;
}