#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    long long ans = 0, cnt1 = 0, cnt2 = 0;

    for(long long i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] > 0)
            ans += (a[i] - 1);
        else if(a[i] < 0){
            ans += (-1 - a[i]);  
            cnt1++;
        } else{
            cnt2++;
            ans++;
        } 
    }

    if(cnt1 % 2 == 1){
        if(cnt2 <= 0)
            ans += 2;
    }

    cout << ans;

    return 0;
}