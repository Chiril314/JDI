#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    
    long long ans = 0;
    for(long long i = 0; i < n; i++)
        ans += abs(a[i] - i - 1);

    cout << ans;

    return 0;
}