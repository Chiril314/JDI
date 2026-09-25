#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, sum = 0, ans = 0, l = 0;
    cin >> n >> x;

    vector<int> a(n);
    for(int r = 0; r < n; r++){
        cin >> a[r];
        
        sum += a[r];
        while(sum > x){
            sum -= a[l];
            l++;
        }

        if(sum == x)
            ans++;
    }

    cout << ans;

    return 0;
}