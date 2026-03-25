#include <iostream>

using namespace std;

int main(){
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int x = 2 * (d1 + d2), y = 2 * (d1 + d3), z = 2 * (d2 + d3), t = d1 + d2 + d3;

    cout << min({x, y, z, t});

    return 0;
}