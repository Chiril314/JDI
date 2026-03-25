#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, s = 0;
        cin >> n >> m;

        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            s += a;
        }

        if(s == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}