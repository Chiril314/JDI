#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    srand(time(0));
    int a = rand()%10, b = rand()%5 - 2, c = rand()%10 + 3, d = rand()%21 + 13, e = rand()%5; 

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << endl;

    cout << "R = " << d - sqrt(abs( sin((a + b - c) * double(d) / e) * cos(b * (double(a) + b + c / d) * a / e / c) / tan((a + b + c - d - e) * (a - c) * b / (double(d) / e))));

    return 0;
}