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

        if(k >= n - 1)
            cout << 1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}