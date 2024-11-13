#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, a, b, c, t1, t2, m;
    
    cin >> n;
    
    while(n--){
        cin >> a >> b >> c;
        if(a < abs(b-c)+c) cout << 1 << endl;
        else if((a > abs(b-c)+c)) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}
