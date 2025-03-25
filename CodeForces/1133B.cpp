#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> cnt(k, 0);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i] % k]++;
    }

    int ans = 0;

    ans += cnt[0] / 2;
    for(int i = 1; i <= k / 2; i++)
        if(i != k - i)
            ans += min(cnt[i], cnt[k - i]);

    if(k % 2 == 0)
        ans += cnt[k / 2] / 2;
    

    cout << ans * 2;

    return 0;
}