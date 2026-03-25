#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    if(m >= n){
        cout << n;
        return 0;
    }

    long long l = 1, r = 2e9, p = n - m, ans = 0;
    while(l < r){
        long long m = (l + r) / 2;
        if(m * (m + 1) / 2 >= p)
            r = m;
        else
            l = m + 1;
    }

    cout << m + l;

    return 0;
}