#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    int n;
    do{
        cout << "Introduceti n(4-50): ";
        cin >> n;
    } while(n < 4 || n > 50);

    int a[47];
    for(int i = 0; i < n; i++)
        a[i] = rand()%20;

    int sj1 = 0, sj2 = 0, sp1 = 0, sp2 = 0, sp3 = 0, sp4 = 0;
    int minj1 = 21, minj2 = 21, minp1 = 21, minp2 = 21, minp3 = 21, minp4 = 21;
    int maxj1 = -1, maxj2 = -1, maxp1 = -1, maxp2 = -1, maxp3 = -1, maxp4 = -1;
    for(int i = 0; i < n; i++){
        if(i < n / 2){
            sj1 += a[i];
            if(a[i] < minj1)
                minj1 = a[i];
            if(a[i] > maxj1)
                maxj1 = a[i];
        } else{
            sj2 += a[i];
            if(a[i] < minj2)
                minj2 = a[i];
            if(a[i] > maxj2)
                maxj2 = a[i];
        }

        if(i < n / 4){
            sp1 += a[i];
            if(a[i] < minp1)
                minp1 = a[i];
            if(a[i] > maxp1)
                maxp1 = a[i];
        } else if(i < n / 2){
            sp2 += a[i];
            if(a[i] < minp2)
                minp2 = a[i];
            if(a[i] > maxp2)
                maxp2 = a[i];
        } else if(i < 3 * n / 4){
            sp3 += a[i];
            if(a[i] < minp3)
                minp3 = a[i];
            if(a[i] > maxp3)
                maxp3 = a[i];
        } else{
            sp4 += a[i];
            if(a[i] < minp4)
                minp4 = a[i];
            if(a[i] > maxp4)
                maxp4 = a[i];
        }
    }

    cout << endl << "Vectorul este:";
    for(int i = 0; i < n; i++)
        cout << ' ' << a[i];

    cout << endl << "Suma primei jumatati este " << sj1;
    cout << ", numarul minim este " << minj1 << ", iar numarul maxim este " << maxj1 << endl;

    cout << "Suma celei de-a doua jumatati este " << sj2;
    cout << ", numarul minim este " << minj2 << ", iar numarul maxim este " << maxj2 << endl;

    cout << "Suma primei patrimi este " << sp1;
    cout << ", numarul minim este " << minp1 << ", iar numarul maxim este " << maxp1 << endl;

    cout << "Suma celei de-a doua patrimi este " << sp2;
    cout << ", numarul minim este " << minp2 << ", iar numarul maxim este " << maxp2 << endl;

    cout << "Suma celei de-a treia patrimi este " << sp3;
    cout << ", numarul minim este " << minp3 << ", iar numarul maxim este " << maxp3 << endl;

    cout << "Suma celei de-a patra patrimi este " << sp4;
    cout << ", numarul minim este " << minp4 << ", iar numarul maxim este " << maxp4 << endl;

    return 0;
}