#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int a1 = 0, a2 = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        a1 += (a % 2);
    }

    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        a2 += (a % 2);
    }

    int b1 = n - a1, b2 = m - a2;
    cout << min(a1, b2) + min(a2, b1);

    return 0;
}   