#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    cout << n << ' ';
    for(int i = 1; i < n; i++)
        cout << i << ' ';

    return 0;
}