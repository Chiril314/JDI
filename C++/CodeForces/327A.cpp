#include <iostream>

using namespace std;

int main(){
    int n, a, cnt0 = 0, cnt1 = 0, max0 = -1;
    cin >> n;

    while(n--){
        cin >> a;
        if(a == 1){
            cnt1++;
            if(cnt0 > 0){
                cnt0--;
            }
        } else if(a == 0){
            cnt0++;
            if(cnt0 > max0){
                max0 = cnt0;
            }
        }
    }

    int ans = cnt1 + max0;
    cout << ans;

    return 0;
}