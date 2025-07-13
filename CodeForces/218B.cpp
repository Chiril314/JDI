#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for(int i = 0; i < m; i++)
        cin >> a[i];

    vector<int> b;
    b = a;

    long long ans1 = 0, ans2 = 0;
    int t = n, i = 0;
    while(t--){
        sort(b.rbegin(), b.rend());
        if(b[0] == 0)
            break;

        ans1 += b[0];
        b[0]--;
    }    

    while(n--){
        sort(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++)
            if(a[i] > 0){
                ans2 += a[i];
                a[i]--;
                break;
            }
    }

    cout << ans1 << ' ' << ans2;

    return 0;
}