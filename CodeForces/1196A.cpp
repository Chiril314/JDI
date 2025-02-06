#include <iostream>

using namespace std;

int main(){
    long long q;
    cin >> q;

    while(q--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long x = a +  b + c;

        cout << x / 2 << endl;
    }

    return 0;
}