#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    cout << "ROYGBIV";
    for(int i = 0; i < n - 7; i++)
        if(i % 4 == 0)
            cout << 'G';
        else if(i % 4 == 1)
            cout << 'B';
        else if(i % 4 == 2)
            cout << 'I';
        else if(i % 4 == 3)
            cout << 'V';

    return 0;
}