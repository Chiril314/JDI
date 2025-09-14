#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int a, b, c, d, e = rand()%(199 - 55) + 55;
    cin >> a >> b >> c >> d;

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e;
    cout << endl << "a + (b - c) * d + e = " << a + (b - c) * d + e;

    return 0;
}