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

        bool flag = false;
        for(int i = 0; i <= n; i += 3){
            for(int j = 0; j <= n; j += 5){
                int k = n - i - j;
                if(k < 0 || k % 7 != 0)
                    continue;

                cout << i / 3 << ' ' << j / 5 << ' ' << k / 7 << endl;
                flag = true;

                break;
            }

            if(flag)
                break;
        }

        if(!flag)
            cout << -1 << endl;
    }

    return 0;
}