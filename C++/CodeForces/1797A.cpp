#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;

        int ans1 = 0, ans2 = 0;
        if(x1 != 1)
            ans1++;
        if(x1 != n)
            ans1++;
        if(y1 != 1)
            ans1++;
        if(y1 != m)
            ans1++;
        
        if(x2 != 1)
            ans2++;
        if(x2 != n)
            ans2++;
        if(y2 != 1)
            ans2++;
        if(y2 != m)
            ans2++;
        
        cout << min(ans1, ans2) << endl;
    }


    return 0;
}