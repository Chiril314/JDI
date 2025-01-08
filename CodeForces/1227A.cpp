#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int max_l = 0, min_r = 1e9;

        for(int i = 0; i < n; i++){
            int l, r;
            cin >> l >> r;
            max_l = max(max_l, l);
            min_r = min(min_r, r);
        }

        cout << max(0, max_l - min_r) << endl;
    }

    return 0;
}