#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);

    long long s = 0, m = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
        m = max(m, a[i]);
    }
    
    long long t = n * m - s, z = 0;
    for(int i = 0; i < n; i++)
        if(a[i] != m)
            z = gcd(z, m - a[i]);

    cout << t / z << ' ' << z;

    return 0;
}