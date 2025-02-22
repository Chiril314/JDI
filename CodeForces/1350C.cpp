#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    long long int n;
    cin >> n;

    vector<long long> a(n + 1);
    vector<long long> b(n + 1);
    for(long long i = 1; i <= n; i++)
        cin >> a[i];

    b[n] = a[n];
    for(long long i = n - 1; i >= 1; i--)
        b[i] = gcd(a[i], b[i + 1]);

    vector<long long> gcdValues;
    for(long long i = 1; i < n; i++)
        gcdValues.push_back((a[i] * b[i + 1]) / gcd(a[i], b[i + 1]));

    if(gcdValues.empty()){
        cout << a[1] << endl;
        return 0;
    }

    long long ans = gcdValues[0];
    for(long long i = 1; i < gcdValues.size(); i++)
        ans = gcd(ans, gcdValues[i]);

    cout << ans;

    return 0;
}