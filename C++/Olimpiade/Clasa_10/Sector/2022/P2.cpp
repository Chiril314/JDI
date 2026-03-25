#include <iostream>

using namespace std;

int specific(int n){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += (2 * i) + i - 1;
    }

    return ans;
}


int floors(int n){
    bool flag = false;
    int ans = 0, i = 1, x = 0;
    while(!flag){
        x += (2 * i) + i - 1;
        if(n - x < 0){
            x -= (2 * i) + i - 1;
            flag = true;
        } else{
            ans++;
        }

        i++;
    }

    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int ans = floors(n), temp = n;
        temp -= specific(ans);
        for(int i = floors(n) - 1; i > 0; i--){
            if(temp - specific(i) < 0){
                temp -= specific(i);
                ans--;
            }

        }

        cout << ans << endl;
    }

    return 0;
}