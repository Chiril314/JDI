#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), v;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    v = a;

    int k = 0, ans = 0;
    for(int i = 0; i < n; i++){
        int l = 0, r = n - 1, ind = -1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(v[m] > a[i]){
                ind = m;
                r = m - 1;
            } else
                l = m + 1;
        }

        if(ind != -1){
            ans++;
            v[ind] = -1;
            swap(v[ind], v[k++]);
        }
    }

    cout << ans;

    return 0;
}