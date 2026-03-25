#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }

    int t = (s + 1) / 2;

    vector<bool> dp(s + 1, 0);
    dp[0] = 1;

    for(int i = 0; i < n; i++)
        for(int j = s; j >= a[i]; j--)
            if(dp[j - a[i]])
                dp[j] = 1;

    for(int i = t; i <= s; i++)
        if(dp[i]){
            cout << i;
            break;
        }
        

    return 0;
}