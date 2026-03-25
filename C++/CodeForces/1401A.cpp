#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if(k < n){
            if((n - k) % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        } else if(k > n)
            cout << k - n << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}