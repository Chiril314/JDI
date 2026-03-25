#include <iostream>

using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    if(a1 != b1 && a2 != b2 && a3 != b3)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}