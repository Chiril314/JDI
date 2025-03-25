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

    int ans = 1;
    for(int i = 1; i < n; i++)
        if(a[i] != a[i - 1])
            ans++;

    cout << ans;

    return 0;
}