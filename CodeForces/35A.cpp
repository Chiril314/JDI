#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    int x;
    int a1, a2, b1, b2, c1, c2;
    cin >> x >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    if(a1 == x)
        x = a2;
    else if(a2 == x)
        x = a1;

    if(b1 == x)
        x = b2;
    else if(b2 == x)
        x = b1;

    if(c1 == x)
        x = c2;
    else if(c2 == x)
        x = c1;

    cout << x;

    return 0;
}