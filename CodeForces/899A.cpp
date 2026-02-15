#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), cnt(3);

    cnt[1] = 0;
    cnt[2] = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    int ans = min(cnt[1], cnt[2]);
    cnt[1] -= ans;

    cout << ans + cnt[1] / 3;

    return 0;
}