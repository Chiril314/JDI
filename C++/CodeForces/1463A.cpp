#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if((a + b + c) % 9 == 0 && min({a, b, c}) >= (a + b + c) / 9)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}