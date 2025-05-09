#include <iostream>
#include <cmath>

using namespace std;

long long divisorCnt(long long n){
	long long cnt = 0; 
    for (long long i = 1; i <= sqrt(n); i++) { 
        if(n % i == 0) { 
            if(n / i == i) 
                cnt++; 
            else
                cnt += 2; 
        } 
    } 

    return cnt;
}

int main(){
    long long n;
    cin >> n;

    cout << divisorCnt(n);

    return 0;
}