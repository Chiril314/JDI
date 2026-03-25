#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    long long min1 = min(x1, x2);
    long long min2 = min(x3, x4);
    
    long long Max = max(max(x1, x2), max(x3, x4));

    int a, b, c;
    a = Max - min1;
    b = Max - min2;
    c = Max - a - b;

    cout << a << ' ' << b << ' ' << c;

    return 0;
}