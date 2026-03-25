#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    if(n <= 2){
        cout << -1;
        return 0;
    }

    if(n % 2 == 1){
        long long b = (n * n - 1) / 2;
        long long c = (n * n + 1) / 2;
        cout << b << ' ' << c;
    } else{
        long long k = n / 2;
        long long b = k * k - 1;
        long long c = k * k + 1;
        cout << b << ' ' << c;
    }

    return 0;
}