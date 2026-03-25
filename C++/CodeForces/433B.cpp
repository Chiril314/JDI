#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m;
    cin >> n;

    vector<long long> a(n + 1), b, c(n + 1), d(n + 1);
    for(long long i = 1; i <= n; i++)
        cin >> a[i];

    b = a;
    cin >> m;

    c[0] = 0;
    d[0] = 0;

    sort(b.begin(), b.end());
    for(long long i = 1; i <= n; i++){
        c[i] = c[i - 1] + a[i];
        d[i] = d[i - 1] + b[i];
    }

    while(m--){
        long long t, l, r;
        cin >> t >> l >> r;

        if(t == 1)
            cout << c[r] - c[l - 1] << endl;
        else
            cout << d[r] - d[l - 1] << endl;
    }

    return 0;
}