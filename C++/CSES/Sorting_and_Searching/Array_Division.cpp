#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long n, k;
vector<long long> a;

bool canDivide(long long x){
    long long parts = 1, sum = 0;
    for(long long i = 0; i < n; i++){
        if(sum + a[i] > x){
            parts++;
            sum = a[i];
        } else
            sum += a[i];
    }

    return parts <= k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l = 0, r = 0;
    cin >> n >> k;

    a.resize(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];

        r += a[i];
        l = max(l, a[i]);
    }

    while(l < r){
        long long mid = l + (r - l) / 2;
        if(canDivide(mid))
            r = mid;
        else
            l = mid + 1;
    }

    cout << l;

    return 0;
}