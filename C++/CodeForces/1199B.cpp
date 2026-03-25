#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double a, b;
    cin >> a >> b;

    double c = (b * b - a * a) / (2 * a);
    cout << setprecision(13) << fixed << c;

    return 0;
}