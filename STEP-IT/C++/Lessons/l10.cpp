#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

/*
    int a[7][20], n = rand()%5 + 2, m = rand()%19 + 1;

    cout << "Matricea[" << n << "][" << m << "] este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = rand()%11 + 10;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl;
    for(int i = 0, s; i < n; i++){
        s = 0;
        for(int j = 0; j < m; j++)
            s += a[i][j];
        
        cout << "Suma[" << i << "] = " << s << endl;
    }

    cout << endl;
    for(int i = 0, s, mx, mxp; i < n; i++){
        s = 0;
        mx = a[i][0];
        for(int j = 0; j < m; j++){
            s += a[i][j];
            if(mx < a[i][j]){
                mx = a[i][j];
                mxp = j;
            }
        }

        a[i][mxp] = s;
        cout << "Suma[" << i << "] = " << s << endl;
        cout << "Max[" << i << "][" << mxp << "] = " << mx << endl;
    }

    cout << endl << "Matricea[" << n << "][" << m << "] modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    
    for(int j = 0, swap; j < m; j++){
        swap = a[0][j];
        a[0][j] = a[n - 1][j];
        a[n - 1][j] = swap;
    }

    cout << endl << "Matricea[" << n << "][" << m << "] modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
*/

    int a[6][6], n = rand()%4 + 2;

    cout << "Matricea[" << n << "][" << n << "] este: ";
    for(int i = 0; i < n; i++){
        cout << endl;
        for(int j = 0; j < n; j++){
            a[i][j] = rand()%11 + 10;
            cout << a[i][j] << ' ';
        }
    }

    cout << endl << endl << "Diagonala principala este: ";
    for(int i = 0; i < n; i++)
        cout << a[i][i] << ' ';

    cout << endl << "Diagonala secundara este: ";
    for(int i = 0; i < n; i++)
        cout << a[n - i - 1][i] << ' ';

    for(int i = 0, swap; i < n; i++){
        swap = a[i][i];
        a[i][i] = a[n - i - 1][i];
        a[n - i - 1][i] = swap;
    }

    cout << endl << endl << "Matricea[" << n << "][" << n << "] modificata este: ";
    for(int i = 0; i < n; i++){
        cout << endl;
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
    }

    return 0;
}