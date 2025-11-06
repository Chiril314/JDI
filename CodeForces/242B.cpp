#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> l(n), r(n);
    for(int i = 0; i < n; i++)
        cin >> l[i] >> r[i];
    
    int mn = INT_MAX, mx = 0;
    for(int i = 0; i < n; i++){
        mn = min(mn, l[i]);
        mx = max(mx, r[i]);
    }

    for(int i = 0; i < n; i++)
        if(l[i] == mn && mx == r[i]){
            cout << i + 1;
            return 0;
        }

    cout << -1;

    return 0;
}