#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, z, n;
    cin >> x >> y >> z >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> a[i].first >> s;

        if(s == "USB")
            a[i].second = 1;
        else
            a[i].second = 2;
    }

    sort(a.begin(), a.end());

    long long ans = 0, cnt = 0;
    for(int i = 0; i < n; i++)
        if(a[i].second == 2){
            if(y){
                y--;
                ans += a[i].first;
                cnt++;
            } else if(z){
                z--;    
                ans += a[i].first;
                cnt++;
            }
        } else if(a[i].second == 1){
            if(x){
                x--;
                ans += a[i].first;
                cnt++;
            } else if(z){
                z--;
                ans += a[i].first;
                cnt++;
            }
        }

    cout << cnt << ' ' << ans;

    return 0;
}