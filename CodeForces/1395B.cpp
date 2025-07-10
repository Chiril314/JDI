#include <iostream>

using namespace std;

int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    cout << x << ' ' << y << endl;

    for (int i = y - 1; i >= 1; i--)
        cout << x << ' ' << i << endl;

    for(int i = y + 1; i <= m; i++)
        cout << x << ' ' << i << endl;

    bool flag = true;
    for(int i = 1; i <= n; i++){
        if(i == x) 
            continue; 

        if(flag){
            for(int j = m; j >= 1; j--)
                cout << i << ' ' << j << endl;
            flag = false;
        } else{
            for(int j = 1; j <= m; j++)
                cout << i << ' ' << j << endl;
            flag = true;
        }
    }

    return 0;
}