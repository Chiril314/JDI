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

        int k = 0;
        for(int i = 1; i <= n; i++){
            cout << 2 * n + k << ' ';
            k += 2;
        }

        cout << endl;
    }

    return 0;
}