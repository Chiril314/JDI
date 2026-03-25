#include <iostream>

using namespace std;

int minPackages(int n, int k) {
    int bestDivisor = n; 

    for(int i = 1; i <= k && i * i <= n; i++)
        if (n % i == 0) {
            bestDivisor = min(bestDivisor, n / i);
            
            if (n / i <= k)
                bestDivisor = min(bestDivisor, i);
        }

    return bestDivisor;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        cout << minPackages(n, k) << endl;
    }

    return 0;
}