#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        long long n, s = 0;
        cin >> n;

        vector<long long> a(n);
        for(long long i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> prefixSum(n);
        prefixSum[0] = a[0];
        for(long long i = 1; i < n; i++)
            prefixSum[i] = prefixSum[i - 1] + a[i];

        vector<long long> suffixSum(n);
        reverse(a.begin(), a.end());
        suffixSum[0] = a[0];

        for(long long i = 1; i < n; i++)
            suffixSum[i] = suffixSum[i - 1] + a[i];

        bool flag = false;
        for(long long i = 0; i < n; i++)
            if(prefixSum[i] <= 0 || suffixSum[i] <= 0)
                flag = true;

        cout << (flag ? "NO\n" : "YES\n");
    }

    return 0;
}