#include <iostream>

using namespace std;

bool primeFinder(int b){
    for(int i = 2; i < b; i++){
        if(b % i == 0){
            return false;
        }
    }

    return true;
}


int num(int b){
    int ans = 0;
    while(b != 0){
        ans += (b % 10);
        b /= 10;
    }

    return ans;
}  


int main(){
    int n;
    cin >> n;

    int cnt = 0, check = n;
    while(check != 0){
        check /= 10;
        cnt++;
    }

    for(int i = pow(10, cnt - 1); i <= n; i++){
        if(primeFinder(i) && primeFinder(num(i))){
            cout << i << endl;
        }
    }

    return 0;
}