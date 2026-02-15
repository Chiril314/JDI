#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, ans = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        x = (x + k - 1) / k;
        
        ans += x;
    }

    cout << (ans + 1) / 2;

    return 0;
}