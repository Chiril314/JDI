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

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int x = 0, y = 0, cnt = 0;
    while(x < n && y < m){
        if(b[y] >= a[x]){
            x++;
            y++;
            cnt++;
        } else{
            y++;
        }
    }

    cout << max(max(0, n - m), n - cnt);

    return 0;
}