#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, t, c;
    cin >> n >> t >> c;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long ans = 0, cnt = 0;  

    for(long long i = 0; i < c; i++){
        if(a[i] > t){
            cnt++;
        }
    }

    if(cnt == 0){
        ans++;
    }

    for(long long i = c; i < n; i++){
        if(a[i - c] > t){
            cnt--;
        }

        if(a[i] > t){
            cnt++;
        }

        if(cnt == 0){
            ans++;
        }
    }

    cout << ans;

    return 0;
}