#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, ans = 3;
        cin >> n;

        if(n == 1)
            ans = 0;
        else if(n == 2)
            ans = 1;
        else if(n == 3)
            ans = min(ans, 2);
        
        if(n % 2 == 0)
            ans = min(ans, 2);

        cout << ans << endl;
    }

    return 0;
}