#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x, y, n;
        cin >> x >> y >> n;

        int k = n - n % x;
        if(k + y <= n)
            cout << k + y << endl;
        else
            cout << k + y - x << endl;
    }

    return 0;
}