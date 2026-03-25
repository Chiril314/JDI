#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, l = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0;

    map<int, int> m;
    for(int r = 0; r < n; r++){
        m[a[r]]++;
        while(m[a[r]] > 1){
            m[a[l]]--;
            l++;
        }

        ans += (r - l + 1); 
    }

    cout << ans;

    return 0;
}