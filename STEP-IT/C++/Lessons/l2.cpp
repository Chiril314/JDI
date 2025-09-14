#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
/*  
    int a1, a2, a3;
    double b1, b2, b3;
    bool c1, c2, c3;
    char d1, d2, d3;
*/

/*
    int anC, anN;
    cin >> anC >> anN;
    cout << anC - anN;
*/


/*
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b - c;
*/

/*
    <cstdlib>
    <ctime>
    srand(time(0));
    cout << rand()%100;
*/

/*
    srand(time(0));
    int a = rand()%33, b = rand()%55, c = rand()%77;
    cout << a << endl << b << endl << c << endl << a + b - c;
*/

    srand(time(0));
    int a = rand()%(73 + 33) - 33, b = rand()%(199 - 55) + 55;
    cout << a << endl << b << endl << a + b;

    return 0;
}