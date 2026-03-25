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
        int a, b, c, r;
        cin >> a >> b >> c >> r;

        if(a > b) 
            swap(a, b);

        int check1 = max(a, c - r), check2 = min(b, c + r);
        cout << b - a - max(0, check2 - check1) << endl;
    }

    return 0;
}