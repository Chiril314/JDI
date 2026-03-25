#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int t;
    cin >> t;

    double pi = acos(-1);

    while(t--){
        double n;
        cin >> n;

        double ans = (1 / tan(pi / (2 * n)));
        cout << fixed << setprecision(9) << ans << endl;
    }

    return 0;
}