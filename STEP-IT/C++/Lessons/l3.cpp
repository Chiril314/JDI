#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
/*
    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) / double(c) * (double(a) / c / b);
*/

/*
    srand(time(0));
    int a = rand()%20 + 10, b = rand()%20 + 10, c = rand()%20 + 10;
    
    cout << a << ' ' << b << ' ' << c << endl;
    cout << double(a) / b + double(c) / a;
*/

/*
    int a, b, c;
    cin >> a >> b >> c;

    cout << sqrt(abs(double(pow(a, 2) + pow(b, 3) - pow(c, 4)) / (sin(pow(a, 3)) / cos(pow(b, 4)))));
*/

    srand(time(0));
    int a = rand()%66 - 33;
    double b = (rand()%50 + 10) * 1.23;

    cout << a << ' ' << b;

    return 0;
}