#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b){
    if(!b)
        return a;

    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a * b) / gcd(a, b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;

    long long ans1 = (n / a - n / lcm(a, b)) * x;
    long long ans2 = (n / b - n / lcm(a, b)) * y;

    cout << ans1 + ans2 + (n / lcm(a, b)) * max(x, y);

    return 0;
}