#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minDigit(long long n){
    long long minD = 9;
    while(n > 0){
        minD = min(minD, n % 10);
        n /= 10;
    }

    return minD;
}

long long maxDigit(long long n){
    long long maxD = 0;
    while(n > 0){
        maxD = max(maxD, n % 10);
        n /= 10;
    }

    return maxD;
}

long long solve(long long a, long long k){
    for(long long i = 1; i < k; i++){
        long long minD = minDigit(a);
        long long maxD = maxDigit(a);
        if (minD == 0) 
            break;  

        a += minD * maxD;
    }

    return a;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long a, k;
        cin >> a >> k;
        cout << solve(a, k) << endl;
    }
    
    return 0;
}