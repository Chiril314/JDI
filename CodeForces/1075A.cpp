#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x, y;
    cin >> n >> x >> y;

    long long d1 = x + y - 2, d2 = n - x + n - y;
    if(d1 <= d2)
        cout << "White";
    else
        cout << "Black";

    return 0;   
}