#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long k, sum = 0, ans = 0;
    string s;
    cin >> k >> s;

    for(int i = 0; i < s.size(); i++)
        sum += s[i] - '0';

    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(sum >= k)
            break;
        sum += 9 - (s[i] - '0');
        ans++;
    }

    cout << ans;

    return 0;
}