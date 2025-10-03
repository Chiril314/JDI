#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int set[50][5][5][5], n, x, y;

    n = rand()%40 + 10;
    cout << "Nr. Cuburi = " << n;

    for(int cub = 0; cub < n; cub++)
        for(int i = 0; i < 5; i++){
            cout << endl << "Cub = " << cub + 1 << ", Matrix = " << i + 1 << endl;
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < 5; k++){
                    set[cub][i][j][k] = rand()%10;
                    cout << set[cub][i][j][k] << ' ';
                }

                cout << endl;
            }
        }

    do{
        cout << endl << "Enter cub X[1..." << n << "] = ";
        cin >> x;
    } while(x < 1 || x > n);

    do{
        cout << endl << "Enter cub Y[1..." << n << ", X = " << x << ", Y != X] = ";
        cin >> y;
    } while(y < 1 || y > n || x == y);

    cout << "Cubul " << x << " <=> Cubul " << y << endl;
    x--;
    y--;


    for(int i = 0, temp; i < 5; i++)
        for(int j = 0; j < 5; j++)
            for(int k = 0; k < 5; k++){
                temp = set[x][i][j][k];
                set[x][i][j][k] = set[y][i][j][k];
                set[y][i][j][k] = temp;
            }

    for(int cub = 0; cub < n; cub++)
        for(int i = 0; i < 5; i++){
            cout << endl << "Cub = " << cub + 1 << ", Matrix = " << i + 1 << endl;
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < 5; k++){
                    cout << set[cub][i][j][k] << ' ';
                }

                cout << endl;
            }
        }


    return 0;
}