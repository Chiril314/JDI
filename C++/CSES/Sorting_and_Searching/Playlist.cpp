#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
        
    set<long long> used;  
    int l = 0, ans = 0;
    for(int r = 0; r < n; r++){
        while(used.count(a[r])){
            used.erase(a[l]);
            l++;
        }

        used.insert(a[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans;

    return 0;
}