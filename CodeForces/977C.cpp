#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int ans;

    if(k == 0)
        ans = a[0] - 1;
    else    
        ans = a[k - 1];

    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(a[i] <= ans)
            cnt++;

    if(ans < 1 || cnt != k) 
        cout << -1;
    else   
        cout << ans;

    return 0;
}