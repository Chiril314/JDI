#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= (n * n) / 2; i++){
        cout << i << ' ' << ((n * n  + 1) - i) << ' ';
        if(i % (n / 2) == 0)
            cout << endl;
    }

    return 0;
}