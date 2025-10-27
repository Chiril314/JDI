#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

/*
    int *n = new int(rand()%9 + 1);
    cout << "n = " << *n << endl;

    for(int *i = new int(0), *r; *i < *n; *i += 1){
        int *a = new int(rand()%10), *b = new int(rand()%10), *c = new int(rand()%10);
        r = new int(*a + *b - *c);

        cout << *i + 1 << " din " << *n << ": " << *a << " + ";
        cout  << *b << " - " << *c << " = " << *r << endl;

        delete a, delete b, delete c, delete r;
    }
*/

    int *n = new int;
    do{
        cout << endl << "Enter nr valori(1...1000): ";
        cin >> *n;
    } while(*n < 1 || *n > 1000);

    int *a = new int[*n]();
    cout << endl << "Vectorul este: ";
    for(int i = 0; i < *n; i++){
        a[i] = rand()%20;
        cout << a[i] << ' ';
    }

    int *x = new int, *y = new int, *s = new int(0);
    do{
        cout << endl << "Enter x(0..." << 19 << "): ";
        cin >> *x;
    } while(*x < 0 || *x >= 20);

    do{
        cout << endl << "Enter y(" << *x << "..." << 19 << "): ";
        cin >> *y;
    } while(*y < *x || *y >= 20);

    for(int i = 0; i < *n; i++)
        if(a[i] >= *x && a[i] <= *y)
            *s += a[i];
    
    cout << endl << endl << "Suma elementelor din intervalul[" << *x << ", " << *y << "] este: " << *s;

    delete s, delete x, delete y;

    int *cnt1 = new int(0), *cnt2 = new int(0);
    for(int i = 0; i < *n; i++)
        if(a[i] % 2 == 0 && i < *n / 2)
            *cnt1 += 1;
        else if(a[i] % 2 != 0 && i >= *n / 2)
            *cnt2 += 1;

    cout << endl << endl << "Nr elemente pare din prima jumatate: " << *cnt1;
    cout << endl << "Nr elemente impare din a doua jumatate: " << *cnt2;

    delete cnt1, delete cnt2;

    int *cnt = new int(0);
    for(int i = 0; i < *n; i++)
        if(a[i] % 2 == 0)
            *cnt += 1;

    int *v = new int[*cnt](), *j = new int(0);
    for(int i = 0; i < *n; i++)
        if(a[i] % 2 == 0){
            v[*j] = a[i];
            *j += 1;
        }

    cout << endl << endl << "Vectorul cu elemente pare este: ";
    for(int i = 0; i < *cnt; i++)
        cout << v[i] << ' ';

    delete[] v, delete j, delete cnt;
    delete[] a;

    return 0;
}