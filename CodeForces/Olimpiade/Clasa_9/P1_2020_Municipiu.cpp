#include <iostream>
#include <cmath>

using namespace std;

bool echilibrat(int n){
    int cnt = 0, temp = n;
    while(temp != 0){
        temp /= 10;
        cnt++;
    }

    int check1 = 0, check2 = 0;
    for(int i = 1; i <= cnt; i++){
        if(i % 2 == 1){
            check1 += int(n / pow(10, cnt - i)) % 10;
        } else{
            check2 += int(n / pow(10, cnt - i)) % 10;
        }
    }

    if(check1 == check2){
        return true;
    }

    return false;
}


int main(){
    int n;
    cin >> n;

    bool flag = false;
    while(!flag){
        n++;
        if(echilibrat(n)){
            flag = true;
        }
    }

    cout << n;

    return 0;
}