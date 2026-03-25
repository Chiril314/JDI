#include <iostream>

using namespace std;

int main(){
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    int l[n], r[n];
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
    }

    if(n == 0){
        cout << 0;
    } else{
        int ans = 0, Break;
        for(int i = 0; i < n; i++){
            ans += (r[i] - l[i]) * P1;
            if(i == n - 1){
                cout << ans;
            } else{
                Break = l[i + 1] - r[i];
                if(Break >= T1){
                    Break -= T1;
                    ans += T1 * P1;

                    if(Break >= T2){
                        Break -= T2;
                        ans += T2 * P2;

                        ans += Break * P3;
                    } else{
                        ans += Break * P2;
                    }
                } else{
                    ans += Break * P1;
                }
            }
        }
    }

    return 0;
}