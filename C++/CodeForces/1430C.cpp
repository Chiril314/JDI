#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << 2 << endl;
        if(n == 2){
            cout << "1 2" << endl;
            continue;
        }

        cout << n - 2 << ' ' << n << endl;
        cout << n - 1 << ' ' << n - 1 << endl;

        int k = n - 3;
        while(k--){
            cout << n - 3 << ' ' << n - 1 << endl;
            n--;
        }
    }

    return 0;
}