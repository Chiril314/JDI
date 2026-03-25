#include <iostream>

using namespace std;

long long f(long long x){
    if(x % 2 == 0)
        return x / 2;
    else
        return (x - 1) / 2 - x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long l, r;
        cin >> l >> r;

        cout << f(r) - f(l - 1) << endl;
    }

    return 0;   
}