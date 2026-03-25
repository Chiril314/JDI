#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for(int a = 0; a * a <= n; a++){
        int b = n - a * a;
        if(b >= 0 && a + b * b == m)
            cnt++;
    }

    cout << cnt;

    return 0;
}