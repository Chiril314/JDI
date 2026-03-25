#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, mx = 0;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> ans(n);
    for(long long i = 0; i < n; i++){
        long long h = 0;

        vector<long long> c(n);
        c[i] = a[i];
        for(long long j = i - 1; j >= 0; j--)
            c[j] = min(c[j + 1], a[j]);

        for(long long j = i + 1; j < n; j++)
            c[j] = min(c[j - 1], a[j]);
        
        for(long long j = 0; j < n; j++)
            h += c[j];

        if(h > mx){
            mx = h;
            for(long long j = 0; j < n; j++)
                ans[j] = c[j];
        } 
    }

    for(long long i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}