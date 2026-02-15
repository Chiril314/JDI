#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, v = -1, a;
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> a;
            if(a % 2 == 0 && v == -1)
                v = i;
        }

        if(v != -1){
            cout << 1 << endl << v + 1 << endl;
            continue;
        }

        if(n >= 2){
            cout << 2 << endl << 1 << ' ' << 2 << endl;
            continue;
        }

        cout << -1 << endl;
    }

    return 0;
}