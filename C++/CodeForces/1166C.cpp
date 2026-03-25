#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a;
    for(long long i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(abs(x));
    }

    long long ans = 0;
    sort(a.begin(), a.end());
    for(long long i = 0, r = 0; i < a.size(); i++){
        while(r < a.size() && a[r] <= a[i] * 2)
            r++;

        if(r >= a.size())
            r--;
        
        if(a[r] > a[i] * 2)
            r--;
        
        ans += max(0LL, r - i);
    }

    cout << ans;

    return 0;
}