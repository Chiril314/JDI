#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    long long cnt0 = 0, cnt1 = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            cnt0++;
        else    
            cnt1++;
    }

    sort(a, a + n);

    long long temp = cnt0;
    cnt0 -= min(cnt0, cnt1);
    cnt1 -= min(temp, cnt1);

    if(cnt0 == 0)
        cnt1--;
    else if(cnt1 == 0)
        cnt0--;

    long long k = 0, ans = 0;
    while(cnt0 > 0){
        if(a[k] % 2 == 0){
            ans += a[k];
            cnt0--;
        }

        k++;
    }

    k = 0;
    while(cnt1 > 0){
        if(a[k] % 2 == 1){
            ans += a[k];
            cnt1--;
        }

        k++;
    }

    cout << ans;

    return 0;
}