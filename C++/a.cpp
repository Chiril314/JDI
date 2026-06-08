#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canCover(vector<long long> &a, int k, long long r){
    int n = a.size(), used = 0, i = 0;
    while(i < n){
        used++;
        if(used > k)
            return false;
    
        long long coverRight = a[i] + 2LL * r;
        while(i < n && a[i] <= coverRight){
            i++;
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long l = 0, r = a[n - 1] - a[0];
    long long ans = r;

    while(l <= r){
        long long m = l + (r - l) / 2;
        if(canCover(a, k, m)){
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << ans;

    return 0;
}