#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(0));

/*
    int a[6][6], n = 6, m = 6;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = rand()%10;

    cout << "Matricea este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
    cout << endl << endl << "Diagonala principala a cadranului I este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[i][i] << ' ';

    cout << endl << "Diagonala secundara a cadranului I este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[n / 2 - 1 - i][i] << ' ';

    cout << endl << endl << "Cadranul I al matricei este: " << endl;
    for(int i = 0; i < n / 2; i++){
        for(int j = 0; j < m / 2; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl << endl << "Diagonala principala a cadranului II este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[i][i + m / 2] << ' ';

    cout << endl << "Diagonala secundara a cadranului II este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[n / 2 - 1 - i][i + m / 2] << ' ';

    cout << endl << endl << "Cadranul II al matricei este: " << endl;
    for(int i = 0; i < n / 2; i++){
        for(int j = m / 2; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl << endl << "Diagonala principala a cadranului III este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[i + n / 2][i] << ' ';

    cout << endl << "Diagonala secundara a cadranului III este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[n - 1 - i][i] << ' ';

    cout << endl << endl << "Cadranul III al matricei este: " << endl;
    for(int i = n / 2; i < n; i++){
        for(int j = 0; j < m / 2; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl << endl << "Diagonala principala a cadranului IV este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[i + n / 2][i + n / 2] << ' ';

    cout << endl << "Diagonala secundara a cadranului IV este: ";
    for(int i = 0; i < n / 2; i++)
        cout << a[n - 1 - i][i + m / 2] << ' ';

    cout << endl << endl << "Cadranul IV al matricei este: " << endl;
    for(int i = n / 2; i < n; i++){
        for(int j = m / 2; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
*/

    int a[10][10], n = 6, m = 6;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = rand()%10;

    cout << "Matricea este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

/*
    for(int i = 0; i < n / 2; i++){
        for(int j = 0, s; j < m / 2; j++){
            s = a[i][j];
            a[i][j] = a[i][j + m / 2];
            a[i][j + m / 2] = s;
            s = a[i][j];
        }
    }

    cout << endl << endl << "Matricea modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
*/

    for(int i = 0; i < n / 2; i++){
        for(int j = 0, s; j < m / 2; j++){
            s = a[i][j + m / 2];
            a[i][j + m / 2] = a[i + n / 2][j];
            a[i + n / 2][j] = s;
        }
    }

    cout << endl << endl << "Matricea modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }


    return 0;
}