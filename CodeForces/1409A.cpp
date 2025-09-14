#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if(a % 10 == b % 10)
            cout << (abs(a - b) / 10) << endl;
        else
            cout << (abs(a - b) / 10) + 1 << endl;
    }

    return 0;
}