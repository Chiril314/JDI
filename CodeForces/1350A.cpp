#include <iostream>
#include <cmath>

using namespace std;

int f(int n){
    if (n % 2 == 0) return 2; 
    int sq = sqrt(n);
    for(int i = 3; i <= sq; i += 2){
        if (n % i == 0) return i;
    }
    return n; 
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        n += f(n);
        k--;

        n += 2 * k;
        cout << n << endl;
    }

    return 0;
}