#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;                   
    cin >> n;

    vector<long long> a(n);    
    for(int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<long long>()); 

    long long ans = 0;
    for(int block = 1; block <= n; block *= 4)
        for(int j = 0; j < block && j < n; j++)
            ans += a[j];        

    cout << ans;

    return 0;
}