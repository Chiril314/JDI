#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, d;
        cin >> n >> d;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a.begin(), a.end());
        cout << (a.back() <= d || a[0] + a[1] <= d ? "YES" : "NO") << endl;
    }

    return 0;
}