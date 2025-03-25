#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, i1, j1, i2, j2;
        cin >> n >> m >> i1 >> j1 >> i2 >> j2;

        if(m % 2 == 1 && n % 2 == 1)
            cout << "NO" << endl;
        else if(m == 1 && (j1 % 2 == 0 || j2 == 0))
            cout << "NO" << endl;
        else if(n == 1 && (i1 % 2 == 0 || i2 == 0))
            cout << "NO" << endl;
        else if((i1 + j1) % 2 == (i2 + j2) % 2)
            cout << "NO" << endl;
        else    
            cout << "YES" << endl;
    }

    return 0;
}