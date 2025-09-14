#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

/*
    double a[3];
    a[0] = rand()%100 - 10.0;
    a[1] = rand()%100 + 0.0;
    a[2] = rand()%100 + 10.0;

    for(int i = 0; i < 3; i++)
        cout << "a[" << i << "] = " << a[i] << endl;
*/

/*
    int a[4];
    for(int i = 0; i < 3; i++)
        a[i] = rand()%10;

    a[3] = a[0] + a[1] - a[2];
    cout << "a = " << a[0] << ", b = " << a[1] << ", c = " << a[2] << ", r = a + b - c = " << a[3];
*/

/*
    int n = rand()%39 + 1, v[39], a, b, c; 
    for(int i = 0; i < n; i++){
        a = rand()%40;
        b = rand()%40;
        c = rand()%40;
        v[i] = a + b - c;
        
        cout << i + 1 << " din " << n << ", a = " << a << ", b = " << b << ", c = ";
        cout << c << " => r = a + b - c = " << v[i] << endl;
    }
*/

    const int n = 10;
    int a[n]; 
    for(int i = 0; i < n; i++)
        a[i] = rand()%30;

    for(int i = 0; i < n; i++)
        cout << i + 1 << " din " << n << " - " << a[i] << endl;

    int s = 0;
    for(int i = 0; i < n; i++)
        s += a[i];

    cout << "1) Suma elementelor din vector este " << s << endl;

    int cntp = 0, cnti = 0;
    for(int i = 0; i < n; i++)
        a[i] % 2 ? cnti++ : cntp++;

    cout << "2) Numarul elementelor pare este " << cntp << ", iar numarul elementelor impare este " << cnti << endl;

    for(int i = 1; i < n; i += 2){
        if(a[i] % 2 == 0)
            cout << "3) Elementul de pe pozitia impara " << i << ", este par - " << a[i] << endl;
    }

    int max = a[0], min = a[0], index_max, index_min;
    for(int i = 1; i < n; i++)
        if(a[i] > max){
            max = a[i];
            index_max = i;
        } else if(a[i] < min){
            min = a[i];
            index_min = i;
        }

    cout << "4) Valoarea maxima din vector este " << max << ", iar valoarea minima este " << min << endl;

    if(index_max < index_min){
        int sw = index_min;
        index_min = index_max;
        index_max = sw;
    }

    int sum = 0;
    for(int i = index_min; i <= index_max; i++)
        sum += a[i];
    
    cout << "5) Suma elementelor dintre pozitia minima si pozitia maxima este " << sum;

    return 0;
}