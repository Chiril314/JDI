#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double n;
    long long t;
    cin >> n >> t;
    
    double check = 1.000000011;
    double ans = n * pow(check, t);
    
    cout << fixed << setprecision(30) << ans;
    
    return 0;
}
