#include <iostream>

using namespace std;

int main(){
    int m, n, k, l, d;
    cin >> m >> n >> k >> l >> d;

    int x[k], y[k];
    for(int i = 0; i < k; i++){
        cin >> x[i] >> y[i];
    }

    int camera[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            camera[i][j] = 0;
        }
    }

    for(int i = 0; i < k; i++){
        camera[x[i]][y[i]] = l;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            camera[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << camera[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}