#include <iostream>
#include <cmath>

using namespace std;

long long smallestPrimeDivisor(long long n){
    if(n % 2 == 0) 
        return 2;  

    for(long long i = 3; i * i <= n; i += 2)
        if(n % i == 0) 
            return i;

    return n;  
}

int main(){
    long long n;
    cin >> n;

    if(n % 2 == 0) 
        cout << n / 2;
    else{
        long long d = smallestPrimeDivisor(n);
        n -= d;  
        cout << 1 + n / 2;
    }

    return 0;
}