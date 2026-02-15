#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b){
    if(!b)
        return a;

    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(n == 1){
        while(m--){
            long long b;
            cin >> b;

            cout << a[0] + b << ' ';
        }

        return 0;
    }

    sort(a.begin(), a.end());
    long long g = a[1] - a[0];

    for(long long i = 2; i < n; i++)
        g = gcd(g, a[i] - a[i - 1]);

    while(m--){
        long long b;
        cin >> b;
        cout << gcd(g, a[0] + b) << ' ';
    }

    return 0;
}