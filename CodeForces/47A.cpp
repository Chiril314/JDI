#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        if(i * (i + 1) / 2 == n){
            cout << "YES";
            return 0;
        }

    cout << "NO";

    return 0;
}