#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], b;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> b;
        c[i] = a[i] - b;
    }

    sort(c.begin(), c.end());
    long long ans = 0;

    for(int i = 0; i < n; i++){
        if(c[i] < 1)
            continue;
        
        int index = lower_bound(c.begin(), c.end(), 1 - c[i]) - c.begin();
        ans += i - index;
    }

    cout << ans;

    return 0;
}