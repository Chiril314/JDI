#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 4 == 2 || n % 4 == 1)
        cout << string(n, '?');
    else if(n % 4 == 3){
        if(n == 3){
            cout << "++-";
        } else{
            cout << "+----++";
            for(int i = 0; i < (n - 7) / 4; i++)
                cout << "+--+";
        }
    } else if(n % 4 == 0)
        for(int i = 0; i < n / 4; i++)
            cout << "+--+";

    return 0;
}