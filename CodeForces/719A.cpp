#include <iostream>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int check, x;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i == n - 2){
            check = x;
        } else if(i == n - 1){
            if(x == 15){
                cout << "DOWN";
                return 0;
            }

            if(x == 0){
                cout << "UP";
                return 0;
            }

            if(n == 1){
                cout << "-1";
                return 0;
            }

            if(x < check)
                cout << "DOWN";
            else if(x > check)
                cout << "UP";
        }
    }

    return 0;
}