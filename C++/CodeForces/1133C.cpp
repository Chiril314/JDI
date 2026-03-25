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

    long long left = 0, ans = 0;
    for(long long right = 0; right < n; right++){
        while(a[right] - a[left] > 5)
            left++;

        ans = max(ans, right - left + 1);
    }

    cout << ans;

    return 0;
}