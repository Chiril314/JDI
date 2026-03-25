#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int l, r;
        cin >> l >> r;

        if(2 * l > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}