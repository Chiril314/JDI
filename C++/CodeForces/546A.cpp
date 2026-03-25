#include <iostream>

using namespace std;

int main(){
    int k, n, w, price = 0;
    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++){
        price += i * k;
    }

    if(n >= price){
        cout << "0";
    } else{
        cout << price - n;
    }

    return 0;
}