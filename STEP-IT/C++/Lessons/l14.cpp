#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

// 1) Pointeri prin referinta - pointerul primeste adresa unei variabile existente
/*
    int a = 3, b = 2, c = 1, ans;
    int *pa = &a, *pb = &b, *pc = &c, *pans = &ans;

    *pans = *pa + *pb - *pc;
    cout << *pa << " + " << *pb << " - " << *pc << " = " << *pans;
*/

/*
    int n, s = 0, a, b, c, r;
    cout << "n = ";
    cin >> n;

    int *ps = &s, *pn = &n, *pa = &a, *pb = &b, *pc = &c, *pr = &r;
    for(int i = 0; i < *pn; i++){
        *pa = rand()%10;
        *pb = rand()%10;
        *pc = rand()%10;

        *pr = *pa + *pb - *pc;
        *ps += *pr;

        cout << endl << i + 1 << " din " << *pn << ": a = " << *pa << ", b = " << *pb << ", c = ";
        cout << *pc << ", a + b - c = " << *pr;        
    }

    cout << endl << "Suma este " << *ps;
*/

    int v[1000], *pv;
    pv = v;

    int n, *pn;
    pn = &n;

    *pn = rand()%10;
    cout << "n = " << *pn << endl;

    for(int i = 0; i < *pn; i++){
        *(pv + i) = rand()%10;
    }

    for(int i = 0; i < *pn; i++){
        cout << *(pv + i) << ' ';
    }

    int s, *ps;
    ps = &s;
    *ps = 0;
    for(int i = 1; i < *pn; i += 2)
        if(*(pv + i) % 2 == 0)
            *ps += *(pv + i);

    cout << endl << "Suma elementelor din lista este " << *ps;

    int c, *pc;
    pc = &c;
    *pc = 0;

    for(int i = 0; i < *pn; i++)
        if(*(pv + i) % 3 == 0)
            (*pc)++;

    cout << endl << "Sunt " << *pc << " valori divizibile la 3";

    return 0;
}