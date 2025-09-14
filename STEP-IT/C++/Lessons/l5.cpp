#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include<iomanip>

using namespace std;

int main(){
/*
    int cnt = 0;

    E:
        cnt++;
        cout << cnt << ' ';

    if(cnt < 10)
        goto E;
*/

/*
    int a = 0;
    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "a++ = " << a++ << endl;
    cout << "a = " << a;
*/

/*
    int a = 0, b = 0, c = 0, r;

    r = a++ + ++b - c++;
    cout << a << ' ' << b << ' ' << c << ' ' << r;
*/

/*
    srand(time(0));
    int a = 0, b = 0, c;

    E:
        c = rand()%6 + 9;
        cout << a++ << " + " << setw(2) << ++b << " - " << setw(2) << c << " = " << setw(2) << a + b - c << endl;

    if(a < 10)
        goto E;
*/

/*
    srand(time(0));
    int a, b, c, r, cnt = 0, cntp = 0, cnti = 0, rp = 0, ri = 0, rf = 0;
    E:
        a = rand()%17;
        b = rand()%17;
        c = rand()%17;

        r = a + b - c;

        cout << setw(2) << a << " + " << setw(2) << b << " - " << setw(2) << c << " = " << setw(2) << a + b - c << endl;
        cnt++;

        if(r % 2 == 0){
            cntp++;
            rp += r;
        } else{
            cnti++;
            ri += r;
        }

        rf += r;
    if(cnt < 10)
        goto E;

    cout << endl << "cntp = " << cntp << ", cnti = " << cnti << ", rf = " << rf << ", rp = " << rp << ", ri = " << ri; 
*/

/*
    srand(time(0));
    int a, n = rand()%5 + 5, cnt = 0, ans = 0, s = 0;

    E: 
        cnt++;
        a = rand()%5 + 2;
        cout << a << ' ';
        if(a % 2 == 0 && a >= 3 && a < 6)
            ans++;

        if((a % 2 == 1 && a >= 0 && a < 5) || (a % 2 == 0 && a >= 6 && a < 10))
            s += a;
    if(cnt < n)
        goto E;
    
    cout << endl << "ans = " << ans << ", s = " << s;
*/

    

    return 0;
}