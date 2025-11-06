#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, k, s = 0;
    cin >> n >> m >> k;

    vector<long long> a(n), d;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(k >= n){
        cout << n << endl;
        return 0;
    }

    for(long long i = 1; i < n; i++)
        d.push_back(a[i] - a[i - 1] - 1);

    sort(d.begin(), d.end());
    for(long long i = 0; i < n - k; i++)
        s += d[i];

    cout << s + n;

    return 0;
}