#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, p, l, r;
    cin >> n >> p >> l >> r;

    p--;
    l--;
    r--;

    if(l > 0 && r < n - 1){
        cout << r - l + min(abs(p - l), abs(p - r)) + 2;
        return 0;
    }

    if(l > 0){
        cout << abs(p - l) + 1;
        return 0;
    }

    if(r < n - 1){
        cout << abs(p - r) + 1;
        return 0;
    }

    cout << 0;

    return 0;
}