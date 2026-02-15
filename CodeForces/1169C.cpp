#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int n, int m, vector<int> &a, int mid){
    int lst = 0;
    for(int i = 0; i < n; i++)
        if(lst > a[i]){
            if(lst > min(m - 1, a[i] + mid))
                return false;
        } else
            if(a[i] + mid >= m){
                if(lst > (a[i] + mid - m))
                    lst = a[i];
            } else
                lst = a[i];

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int l = 0, r = m - 1, ans = m;
    while(l <= r){
        int mid = l + (r - l) / 2;
        if(check(n, m, a, mid)){
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }

    cout << ans;

    return 0;
}