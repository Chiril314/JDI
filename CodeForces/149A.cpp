#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int k;
    cin >> k;

    int a[12];
    for(int i = 0; i < 12; i++){
        cin >> a[i];
    }

    sort(a, a + 12, greater<int>());

    int check = 0, ans = 0;
    for(int i = 0; i < 12; i++){
        if(check >= k){
            cout << ans;

            return 0;
        } else if(check + a[i] >= k){
            cout << ans + 1;

            return 0;
        } else{
            check += a[i];
            ans++;
        }
    }

    cout << -1;

    return 0;
}