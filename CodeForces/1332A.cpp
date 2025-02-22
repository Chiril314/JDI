#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        int u = x - a + b;
        int v = y - c + d;

        if(u >= x1 && u <= x2 && v >= y1 && v <= y2){
            if((x1 == x2 && (a > 0 || b > 0)) || (y1 == y2 && (c > 0 || d > 0)))
                cout << "NO" << endl;
            else 
                cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }

    return 0;
}