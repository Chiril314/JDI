#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int a = rand()%109 - 10, b = rand()%100 + 99, c = rand()%198 - 99;

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << (a % 2 == 0 ? "a este par" : "a este impar") << endl;
    cout << (b % 2 == 0 ? "b este par" : "b este impar") << endl;
    cout << (c % 2 == 0 ? "c este par" : "c este impar") << endl;

    if(a >= 0)
        a = rand()%100 - 100;

    if(b % 2 == 0)
        b = rand()%20 - 10;
    else    
        b = rand()%89 + 10;

    if(c > 0)
        c = 1;
    else if(c < 0)
        c = 2;
    else
        c = 3;

    cout << endl << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "a + b - c = " << a + b - c;

    return 0;
}