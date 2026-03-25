#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    if(n % 2 == 0){
        long long ans1 = 0, ans2 = 0, s1 = a[n / 2], s2 = a[(n / 2) + 1];
        for(int i = 0; i < n; i++){
            ans1 += abs(a[i] - s1);
            ans2 += abs(a[i] - s2);
        }

        cout << min(ans1, ans2);
    } else{
        long long ans = 0, s = a[n / 2];
        for(int i = 0; i < n; i++)
            ans += abs(a[i] - s);

        cout << ans;
    }

    return 0;
}