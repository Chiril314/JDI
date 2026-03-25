#include <iostream>

using namespace std;

long long check(long long a){
    return a * (a - 1) / 2;
}


long long max(long long a, long long b){
    return check(a - b + 1);
}


long long min(long long a, long long b){
    long long x = a / b;
    long long y = a % b;

    return y * check(x + 1) + (b - y) * check(x);
}


int main(){
    long long n, m;
    cin >> n >> m;

    cout << min(n, m) << ' ' << max(n, m);

    return 0;
}