#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int ans = a[n - 1];

    vector<int> b;
    for(int i = 0; i < n; i++){
        if(a[n - 1] % a[i] != 0 || a[i - 1] == a[i])
            b.push_back(a[i]);
    }   

    cout << ans << ' ' << b.back();

    return 0;
}