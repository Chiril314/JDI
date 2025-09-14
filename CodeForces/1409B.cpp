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
        int a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        long long a1 = a, b1 = b, n1 = n;
        long long ca1 = min(n1, a1 - x);
        a1 -= ca1; 
        n1 -= ca1;

        long long cb1 = min(n1, b1 - y);
        b1 -= cb1;
        long long c1 = a1 * b1;

        long long a2 = a, b2 = b, n2 = n;
        long long ca2 = min(n2, b2 - y);
        b2 -= ca2; 
        n2 -= ca2;

        long long cb2 = min(n2, a2 - x);
        a2 -= cb2;
        long long c2 = a2 * b2;
    
        cout << min(c1, c2) << endl;
    }

    return 0;
}