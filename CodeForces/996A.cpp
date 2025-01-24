#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    while(n >= 100){
        n -= 100;
        cnt++;
    }

    while(n >= 20){
        n -= 20;
        cnt++;
    }

    while(n >= 10){
        n -= 10;
        cnt++;
    }

    while(n >= 5){
        n -= 5;
        cnt++;
    }

    while(n >= 1){
        n--;
        cnt++;
    }

    cout << cnt;

    return 0;
}