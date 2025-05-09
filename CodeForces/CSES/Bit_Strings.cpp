#include <iostream>

using namespace std;

long long modExp(long long base, long long exp, long long mod){
    long long result = 1;
    while(exp > 0){
        if(exp % 2 == 1)
            result = (result * base) % mod;
        
        base = (base * base) % mod;
        exp = exp / 2; 
    }

    return result;
}

int main(){
    int n;
    cin >> n;
    
    cout << modExp(2, n, 1000000007);
    
    return 0;
}
