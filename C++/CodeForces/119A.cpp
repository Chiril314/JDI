#include <iostream>

using namespace std;

int gcd(int a, int b){
    int r;
    while ( b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(){
    int a, b, n;
    cin >> a >> b >> n;

    int cnt = 0;    
    while(n >= 0){
        cnt++;
        n -= gcd((cnt % 2 == 1) ? a : b, n);
    }

    if(cnt % 2 == 1){
        cout << 1;
    } else{
        cout << 0;
    }

    return 0;
}