#include <iostream>

using namespace std;

int main(){
    int k, r;
    cin >> k >> r;

    int i = 0, flag = 0;

    while(flag != 1){
        i++;

        if(((k * i - r) % 10 == 0) || ((k * i) % 10 == 0)){
            flag = 1;
        }
    }

    cout << i;

    return 0;
}