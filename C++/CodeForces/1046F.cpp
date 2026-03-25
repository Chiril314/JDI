#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    long long x, y;
    cin >> x >> y;

    long long m = 0, r = 0;
    for(long long i = 0; i < n; i++)
        if(a[i] > x)
            m += ((a[i] + y - 1) / (x + y));
        
    cout << m * y;
    
    return 0;
}