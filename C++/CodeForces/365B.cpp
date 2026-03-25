#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(n < 3)
        cout << n;
    else{
        int ans = 0, cnt = 2;
        for(int i = 2; i < n; i++)
            if(a[i] == a[i - 1] + a[i - 2]){
                cnt++;
                ans = max(ans, cnt);
            } else{
                ans = max(ans, cnt);
                cnt = 2;
            }

        cout << ans;
    }

    return 0;
}