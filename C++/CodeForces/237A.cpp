#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> h(n);
    vector<int> m(n);
    vector<long long> time(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> m[i];
        time[i] = (60 * h[i] + m[i]);
    }

    sort(time.begin(), time.end());
    int cnt1 = 1, cnt2 = 1;

    for(int i = 1; i < n; i++){
        if(time[i] == time[i - 1])
            cnt2++;
        else{
            cnt1 = max(cnt1, cnt2);
            cnt2 = 1;
        }
    }

    int ans = max(cnt1, cnt2);

    cout << ans;

    return 0;
}