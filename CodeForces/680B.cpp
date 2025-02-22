#include <iostream>

using namespace std;

int main(){
    long long n, a;
    cin >> n >> a;

    long long t[n], ans = 0;
    for(long long i = 0; i < n; i++)
        cin >> t[i];

    ans += t[a - 1];
    for(long long i = 1; i < n; i++){
        long long left = a - 1 - i;
        long long right = a - 1 + i;

        if(left >= 0 && right < n){
            if(t[left] && t[right])
                ans += 2;
        } else if(left >= 0 && t[left])
            ans += 1;
        else if(right < n && t[right])
            ans += 1;
    }

    cout << ans;

    return 0;
}