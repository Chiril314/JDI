#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string s[n], ans = "";
    for(int i = 0; i < n; i++){
        cin >> s[i];
        ans += s[i];
    }

    cout << ans[k - 1] << ' ' << ans.size();

    return 0;
}