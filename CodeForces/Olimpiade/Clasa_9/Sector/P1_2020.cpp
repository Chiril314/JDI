#include <iostream>

using namespace std;

int main(){
    int d, a, b, n;
    cin >> d >> a >> b >> n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            d += a;
        } else{
            d -= b;
        }
    }

    cout << d;

    return 0;
}