#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, s;
    cin >> n >> s;

    long long k = n / 2;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long ans = 0;
    if(a[k] < s){
        for(int i = k; i < n; i++){
            if(a[i] < s){
                ans += (s - a[i]);
            }
        }
    } else if(a[k] > s){
        for(int i = k; i >= 0; i--){
            if(a[i] > s){
                ans += (a[i] - s);
            }
        }
    }

    cout << ans;

    return 0;
}