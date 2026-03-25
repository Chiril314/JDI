#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> getDivisors(long long x){
    vector<long long> ans;
    for(long long i = 2; i * i <= x; i++)
        if(x % i == 0){
            ans.push_back(i);
            if(i != x / i)
                ans.push_back(x / i);
        }

    sort(ans.begin(), ans.end());

    return ans;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        long long ans = a[0] * a[n - 1];
        vector<long long> x = getDivisors(ans);

        if(x == a)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}