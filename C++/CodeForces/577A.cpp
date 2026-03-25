#include <iostream>

using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;

    long long ans = 0;

    for(long long i = 1; i * i <= x; i++){
        if(x % i == 0){ 
            long long j = x / i; 
            
            if(i <= n && j <= n){
                ans++;
            } 
            if(i != j && j <= n && i <= n){
                ans++; 
            } 
        }
    }

    cout << ans;

    return 0;
}