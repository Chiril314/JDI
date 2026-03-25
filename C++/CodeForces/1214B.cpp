#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int b, g, n;
    cin >> b >> g >> n;

    cout << min(g, n) - n + min(b, n) + 1;

    return 0;
}