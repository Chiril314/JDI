#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

/*
    int x, n = rand()%20 + 1, a[20], cntx = 0;
    cout << "Introdu X(0...5): ";
    cin >> x;

    cout << endl << "v[" << n << "] este: ";
    for(int i = 0; i < n; i++){
        a[i] = rand()%6;
        cout << a[i] << ' ';
        if(a[i] == x)
            cntx++;   
    }

    cout << endl << "Valoarea " << x << " se repeta de " << cntx << " ori";

    int s = a[0];
    a[0] = a[1];
    a[1] = s;

    cout << endl << endl << "v[" << n << "] modificat este: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';

    int pozx, pozy;
    cout << "Introuceti x: ";
    cin >> pozx;

    cout << "Introuceti y: ";
    cin >> pozy;

    s = a[pozx];
    a[pozx] = a[pozy];
    a[pozy] = s;

    cout << endl << endl << "v[" << n << "] modificat este: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';

    int vp[20], vi[20], cp = 0, ci = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            vp[cp] = a[i];
            cp++;
        } else{
            vi[ci] = a[i];
            ci++;
        }
    }

    cout << endl << endl << "v[" << cp << "] par este: ";
    for(int i = 0; i < cp; i++)
        cout << vp[i] << ' ';

    cout << endl << "v[" << ci << "] impar este: ";
    for(int i = 0; i < ci; i++)
        cout << vi[i] << ' ';

    int aint[20], cint = 0, xint, yint = 0;
    cout << endl << endl << "Introdu x(1..." << n - 1 << "): ";
    do{
        cin >> xint;
    } while(xint < 1 || xint >= n);

        cout << endl << endl << "Introdu y(1..." << n - 1 << ") diferit de x: ";
    do{
        cin >> yint;
    } while(yint < 1 || yint >= n || yint == xint);

    if(--xint > --yint){
        s = xint;
        xint = yint;
        yint = s;
    }

    for(int i = xint; i < yint; i++)
        aint[i - xint] = a[i];

    cout << endl << "v[" << yint - xint << "] de la " << xint + 1 << " pana la " << yint + 1 << " este: ";
    for(int i = 0; i < yint - xint; i++)
        cout << aint[i] << ' ';
*/

/*
    int a[20], n = rand()%20 + 1;
    cout << "v["<< n << "] este: ";
    for(int i = 0; i < n; i++){
        a[i] = rand()%21;
        cout << a[i] << ' ';
    }

    bool flag = true;
    while(flag){
        flag = false;
        for(int i = 0, s; i < n - 1; i++){
            if(a[i] > a[i + 1]){
                s = a[i];
                a[i] = a[i + 1];
                a[i + 1] = s;
                flag = true;
            }
        }
    }

    cout << endl << "v[" << n << "] sortat crescator este: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
*/

    int a[20], n = rand()%20 + 1;
    cout << "v["<< n << "] este: ";
    for(int i = 0; i < n; i++){
        a[i] = rand()%21;
        cout << a[i] << ' ';
    }

    bool flag = true;
    while(flag){
        flag = false;
        for(int i = 0, s; i < (n / 2) - 1; i++){
            if(a[i] > a[i + 1]){
                s = a[i];
                a[i] = a[i + 1];
                a[i + 1] = s;
                flag = true;
            }
        }
    }

    flag = true;
    while(flag){
        flag = false;
        for(int i = n / 2, s; i < n - 1; i++){
            if(a[i] < a[i + 1]){
                s = a[i];
                a[i] = a[i + 1];
                a[i + 1] = s;
                flag = true;
            }
        }
    }

    cout << endl << "v[" << n << "] sortat este: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    

    return 0;
}