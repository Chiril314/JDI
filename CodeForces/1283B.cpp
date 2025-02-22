#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n, k;
        cin >> n >> k;
        
        long long zero = 0;
        long long l = max(zero, (n % k) - (k / 2)); 
        
        long long ans = n - l;
        
        cout << ans << endl;
    }
    
    return 0;
}
