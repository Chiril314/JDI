#include <iostream>

using namespace std;

int main(){
    int x;

    int v[1000][41];
    do{
        cout << "x(1...1000) = ";
        cin >> x;
    } while(x < 1 || x > 1000);

    for(int i = 0; i < x; i++){
        v[i][0] = rand()%30 + 10;
        for(int j = 1; j <= v[i][0]; j++){
            v[i][j] = rand()%10;
        }
    }

    cout << "Vectorii sunt: " << endl;
    for(int i = 0; i < x; i++){
        cout << "v" << i + 1 << "[" << v[i][0] << "]: ";
        for(int j = 1; j <= v[i][0]; j++)
            cout << v[i][j] << ' ';
        cout << endl;
    }

    return 0;
}