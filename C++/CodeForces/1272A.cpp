#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long ap = abs(a - b);
        long long bp = abs(a - c);
        long long cp = abs(b - c);
        
        long long x = ap + bp + cp - 4;

        if(x < 0){
            x = 0;
        }

        cout << x << endl;
    }

    return 0;
}