#include <iostream>

using namespace std;

long long gcd(long long a, long long b){
    if(!b)
        return a;
    
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a * b) / gcd(a, b);
}

long long f(long long n, long long x, long long y){
    long long ans = n / lcm(x, y);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    cout << f(b, x, y) - f(a - 1, x, y);

    return 0;
}