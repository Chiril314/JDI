#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, n;
    cin >> a >> b >> n;

    long long rez = 1 % n;
    a %= n;

    while(b > 0){
        if(b & 1) 
            rez = (rez * a) % n;
        a = (a * a) % n;
        b >>= 1;
    }

    cout << rez;

    return 0;
}