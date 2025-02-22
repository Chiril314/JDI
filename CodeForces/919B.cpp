#include <iostream>
#include <cmath>

using namespace std;

int DigitSumCheck(int x){
    int temp = x;
    int cnt = 0;
    while(temp != 0){
        temp /= 10;
        cnt++;
    }

    int ans = 0;
    for(int i = 1; i <= cnt; i++){
        ans += int(x / pow(10, cnt - i)) % 10;
    }

    return ans;
}

int main(){ 
    int k;
    cin >> k;

    int check = 10;
    while(k--){
        check += 9;
        if(DigitSumCheck(check) != 10)
            k++;
    }

    cout << check;

    
    return 0;   
}