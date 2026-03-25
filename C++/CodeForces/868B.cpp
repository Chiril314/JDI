#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    int mn = min(t1, t2), mx = max(t1, t2), tr = 0;

    if(h >= mn && h < mx)
        tr++;

    if(m >= mn * 5 && m < mx * 5)
        tr++;
    
    if(s >= mn * 5 && s < mx * 5)
        tr++;

    if(tr == 1 || tr == 2)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}