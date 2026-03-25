#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }

    long long t = n, p = 0;
    for(long long i = 2; i * i <= t; i++)
        if(t % i == 0){
            p = i;
            break;
        }

    if(p == 0){
        cout << n;
        return 0;
    }

    while(t % p == 0)
        t /= p;

    if(t == 1)
        cout << p;
    else
        cout << 1;

    return 0;
}