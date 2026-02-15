#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;

    if(n == 1)
        cout << -1;
    else
        cout << n << ' ' << n;

    return 0;
}