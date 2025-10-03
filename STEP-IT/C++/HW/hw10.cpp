#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){srand(time(0));
    int a[100][100], n, m;
    do{
        cout << "n(1...100) = ";
        cin >> n;
    } while(n < 1 || n > 100);

    cout << endl;
    do{
        cout << "m(1...100) = ";
        cin >> m;
    } while(m < 1 || m > 100);

    cout << endl << endl << "Matricea[" << n << "][" << m << "] este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = rand()%11 + 10;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++){
        int mx = a[i][0], mxp = 0;
        for(int j = 0; j < m; j++){
            if(mx < a[i][j]){
                mx = a[i][j];
                mxp = j;
            }
        }

        int mn = a[0][mxp], mnp = 0;
        for(int j = 0; j < n; j++){
            if(mn > a[j][mxp]){
                mn = a[j][mxp];
                mnp = j;
            }
        }

        a[mnp][mxp] = mx;
        a[i][mxp] = mn;
    }

    cout << endl << "Matricea[" << n << "][" << m << "] modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    int r;
    cout << endl << "r(1..." << n << ") = ";
    do{
        cin >> r;
    } while(r < 1 || r > n);
    bool flag = true;
    while(flag){
        flag = false;
        for(int i = 0, s; i < n - 1; i++){
            if(a[r - 1][i] > a[r - 1][i + 1]){
                s = a[r - 1][i];
                a[r - 1][i] = a[r - 1][i + 1];
                a[r - 1][i + 1] = s;
                flag = true;
            }
        }
    }

    cout << endl << "Matricea[" << n << "][" << m << "] modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    int c;
    cout << endl << "c(1..." << n << ") = ";
    do{
        cin >> c;
    } while(c < 1 || c > n);
    flag = true;
    while(flag){
        flag = false;
        for(int i = 0; i < n - 1; i++){
            if(a[i][c - 1] < a[i + 1][c - 1]){
                int s = a[i][c - 1];
                a[i][c - 1] = a[i + 1][c - 1];
                a[i + 1][c - 1] = s;
                flag = true;
            }
        }
    }

    cout << endl << "Matricea[" << n << "][" << m << "] modificata este: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}