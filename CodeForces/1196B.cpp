#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int a[n], cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 1)
                cnt++;
        }

        if(cnt < k)
            cout << "NO" << endl;
        else{
            cnt -= k;

            if(cnt % 2 == 1)
                cout << "NO" << endl;
            else{
                cout << "YES" << endl;

                k--;
                for(int i = 0; i < n; i++)
                    if(a[i] % 2 == 1 && k != 0){
                        cout << i + 1 << ' ';
                        k--;
                    }

                cout << n << endl;
            }
        }
    }

    return 0;
}