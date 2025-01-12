#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    while(n >= 5){
        n -= 5;
        cnt++;
    }
    while(n >= 4){
        n -= 4;
        cnt++;
    }
    while(n >= 3){
        n -= 3;
        cnt++;
    }
    while(n >= 2){
        n -= 2;
        cnt++;
    }
    while(n >= 1){
        n -= 1;
        cnt++;
    }


    cout << cnt;

    return 0;
}