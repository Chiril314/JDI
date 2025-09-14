#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    int n, x, c = 0, c1 = 0, c2 = 0, c3 = 0, s1 = 0, s2 = 0;
    cin >> n;

    E:
        x = rand()%100 - 50;
        cout << c + 1 << " din " << n << ", x = " << x << endl;

        x >= 0 ? c1++ : c2++;
        if(x % 2 == 0 && x < 0)
            s1 += x;
        if(x % 2 != 0 && x > 0)
            s2 += x;

        c++;
        if((x >= -50 && x < 0) || (x >= 0 && x < 22) || (x >= 22 && x < 49))
            c3++;
    if(c < n)
        goto E;

    cout << "c1 = " << c1 << ", c2 = " << c2 << ", s1 = " << s1 << ", s2 = " << s2 << ", c3 = " << c3;

    return 0;
}