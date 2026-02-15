#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    bool flag = false, f1 = false, f2 = false;
    while(true){
        if(a == x && b == y)
            break;
        
        if(a != x)
            a++;
        
        if(a == n + 1)
            a = 1;
        
        if(b != y)
            b--;
        
        if(b == 0)
            b = n;
        
        if(a == b && !f1 && !f2)
            flag = true;
        
        if(a == x)
            f1 = true;
        
        if(b == y)
            f2 = true;
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}