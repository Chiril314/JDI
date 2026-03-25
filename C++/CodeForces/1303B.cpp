#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, g, b;
        cin >> n >> g >> b;

        long long minGoodDays = (n + 1) / 2;
        long long fullCycles = minGoodDays / g;
        long long remainingGoodDays = minGoodDays % g;

        long long totalDays = fullCycles * (g + b) + (remainingGoodDays > 0 ? remainingGoodDays : -b);
        totalDays = max(totalDays, n);

        cout << totalDays << endl;
    }

    return 0;
}
