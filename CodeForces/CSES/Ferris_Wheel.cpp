#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;

    long long a[n];
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    long long ans = 0;
    long long i = 0, j = n - 1;

    while (i <= j){
        if(a[i] + a[j] <= x)
            i++; 

        j--; 
        ans++;
    }

    cout << ans;

    return 0;
}