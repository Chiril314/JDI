#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
// sa se creeze un vector de lungimea n
// sa se schimbe cu locurile: 0 - 1/2 <=> 1/2 - 1
// sortarea crescator pentru: 0 - 1/2
// sortarea descrescator pentru: 1/2 - 1

    int a[100], n, *pa, *pn;

    pa = a;
    pn = &n;
    do{
        cout << endl << "n = ";
        cin >> *pn;
    } while(*pn < 1 || *pn > 100);

    for(int i = 0; i < *pn; i++)
        *(pa + i) = rand()%10;

    cout << endl << endl << "Vectorul   initial: ";
    for(int i = 0; i < *pn; i++)
        cout << *(pa + i) << ' ';

    for(int i = 0, temp; i < *pn / 2; i++){
        temp = *(pa + i);
        *(pa + i) = *(pa + *pn / 2 + i);
        *(pa + *pn / 2 + i) = temp;
    }

    cout << endl << "Vectorul modificat: ";
    for(int i = 0; i < *pn; i++)
        cout << *(pa + i) << ' ';   

    bool flag, *pf;

    pf = &flag;
    *pf = true;
    while(*pf){
        *pf = false;
        for(int i = 0, temp; i < *pn / 2 - 1; i++){
            if(*(pa + i) > *(pa + i + 1)){
                temp = *(pa + i);
                *(pa + i) = *(pa + i + 1);
                *(pa + i + 1) = temp;
                *pf = true;
            }
        }
    }

    *pf = true;
    while(*pf){
        *pf = false;
        for(int i = *pn / 2, temp; i < *pn - 1; i++){
            if(*(pa + i) < *(pa + i + 1)){
                temp = *(pa + i);
                *(pa + i) = *(pa + i + 1);
                *(pa + i + 1) = temp;
                *pf = true;
            }
        }
    }

    cout << endl << "Vectorul    sortat: ";
    for(int i = 0; i < *pn; i++)
        cout << *(pa + i) << ' ';

    return 0;
}