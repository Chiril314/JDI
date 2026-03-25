#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, m, k, ans = 0;
    cin >> n >> m >> k;

    vector<long long> a(n);
    vector<long long> b(m);

    for(long long i = 0; i < n; i++)
        cin >> a[i];
    for(long long i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long i = 0, j = 0;
    while(i < n && j < m){
        if(b[j] < a[i] - k)
            j++;
        else if(b[j] > a[i] + k)
            i++;
        else{
            ans++;
            i++;
            j++;
        }
    }

    cout << ans;

    return 0;
}