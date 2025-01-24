#include <iostream>

using namespace std;

int main(){
    int n, k, time = 240;
    cin >> n >> k;

    time -= k;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(time - (5 * i) >= 0){
            time -= (5 * i);
            ans++;
        }
    }

    cout << ans;

    return 0;
}