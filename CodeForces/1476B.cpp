#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(long long i = 0; i < n; i++)
            cin >> a[i];
        
        long long ans = 0, c = a[0];
        for(long long i = 1; i < n; i++){
            ans = max(ans, a[i] * 100 - c * k);
            c += a[i];
        }

        cout << (ans + k - 1) / k << endl;
    }

    return 0;
}