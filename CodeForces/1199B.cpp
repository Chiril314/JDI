#include <iostream>

using namespace std;

int main() {
  
    long long H, L;
    cin >> H >> L;

    double depth = (double)(L * L - H * H) / (2.0 * H);

    cout << depth << endl;

    return 0;
}
