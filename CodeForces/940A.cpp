#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = n;
    sort(a.begin(), a.end());

    if(n == 1){
        cout << 0;
        return 0;
    }

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++){
            int diff = a[j] - a[i];
            if(diff <= d){
                int r = 0;
                for(int k = 0; k < n; k++)
                    if(a[k] >= a[i] && a[k] <= a[j])
                        r++;

                ans = min(ans, n - r);
            }
        }

    if(ans == n){
        cout << n - 1;
        return 0;
    }

    cout << ans;

    return 0;
}