#include <iostream>

using namespace std;

int main(){
    srand(time(0));

    int n = rand()%10 + 10, ca, cb, cc;
    for(int i = 0, a, b, c, r; i < n; i++){
        ca = -1;
        do{
            a = rand()%100;
            ca++;
        } while(a % 2 != 0);

        cb = -1;
        do{
            b = rand()%200 - 100;
            cb++;
        } while(b >= 10 || b < -10);

        cc = -1;
        do{
            c = rand()%200;
            cc++;
        } while(c > 100 && c < 110);

        r = a + b - c;
        cout << i + 1 << " din " << n;
        cout << ", a[" << ca << "] = " << a;
        cout << ", b[" << cb << "] = " << b;
        cout << ", c[" << cc << "] = " << c << ", r = a + b - c = " << r << endl;
    }

    return 0;
}