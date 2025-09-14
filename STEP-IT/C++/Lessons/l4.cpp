#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

/*
    srand(time(0));
    int a = rand()%44 + 33, b = rand()%44 + 33;

    cout << a << ' ' << b << endl;

    a = a >= 50 ? 1 : 2;
    b = b < 35 ? -1 : -2;

    cout << a << ' ' <<  b << ' ' << a + b;
*/

/*
    int a;
    cin >> a;

    cout << (a % 2 == 0 ? "numarul este par" : "numarul este impar");
*/

/*
    srand(time(0));
    int a = rand()%99, b = rand()%11 + 22;

    cout << a << ' ' << b << endl;

    a = a % 2 == 0 ? rand()%20 - 10 : rand()%10 + 10;
    b = b % 2 == 0 ? rand()%200 - 100 : rand()%100 + 100;

    cout << a << ' ' << b << ' ' << a + b;
*/

/*
    srand(time(0));
    int a, b, c;
    cin >> a >> b >> c;

    if(!(a % 2))
        a = rand()%4 - 2;
    if(b % 2)
        b = rand()%6 - 3;
    if(!(c % 2))
        c = rand()%10 - 5;

    cout << a << ' ' << b << ' ' << c;
*/

/*
    int a;
    cin >> a;

    cout << a << " este ";
    if(a % 2)
        cout << "impar";
    else    
        cout << "par";
*/

/*
    srand(time(0));
    int a = rand()%20 - 10;

    cout << a << endl;
    if(a > 0)
        a = rand()%10 + 10;
    else if(a < 0)  
        a = rand()%10 + 20;
    else
        a = rand()%10 + 30;

    cout << a;
*/

/*
    srand(time(0));
    int a = rand()%10;

    cout << a;
    if(a == 1)
        cout << " unu";
    else if(a == 3)
        cout << " trei";
    else if(a == 5)
        cout << " cinci";
*/

    return 0;
}