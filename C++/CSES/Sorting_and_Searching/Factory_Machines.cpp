#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t;
    cin >> n >> t;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long l = 0, r = a[0] * t;
    while(l < r){
        long long mid = l + (r - l) / 2, produced = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] > mid)
                break;

            produced += (mid / a[i]);
            if(produced >= t)
                break;
        }

        if(produced >= t)
            r = mid;
        else
            l = mid + 1;
    }

    cout << l;

    return 0;
}