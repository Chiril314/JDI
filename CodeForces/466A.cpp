#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost = n * a;

    int full = (n / m) * b;
    int remaining = n % m;
    int cost_m = full + remaining * a;

    int cost_e = full + b;

    int ans = min(cost, min(cost_m, cost_e));

    cout << ans;

    return 0;
}