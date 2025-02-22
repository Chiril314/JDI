#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];

    sort(t, t + n);

    int check = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(check <= t[i])
            ans++;  
        else
            continue;

        check += t[i];
    }

    cout << ans;

    return 0;
}