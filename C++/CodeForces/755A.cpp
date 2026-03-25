#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    if(n == 1)
        cout << 3;
    else if(n == 2)
        cout << 4;
    else
        cout << n - 2;

    return 0;
}