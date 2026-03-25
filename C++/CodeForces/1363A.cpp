#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int a[n], cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0)
                cnt0++;
            else
                cnt1++;
        }

        bool flag = false;
        if(x % 2 == 1){
            for(int i = 0; i <= x; i += 2){
                if(cnt1 >= x - i && cnt0 >= i){
                    flag = true;
                    break;
                }
            }
        } else{
            for(int i = 1; i <= x; i += 2){
                if(cnt0 >= i && cnt1 >= x - i){
                    flag = true;
                    break;
                }
            }
        }

        if(flag)
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }

    return 0;
}