#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    int ans = 0, check = a[0];
    for(int i = 0; i < n; i++){
        ans += (check - a[i]);
    }

    cout << ans;

    return 0;
}