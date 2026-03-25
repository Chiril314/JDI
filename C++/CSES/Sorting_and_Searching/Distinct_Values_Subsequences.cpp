#include <iostream>
#include <vector>
#include <map>

using namespace std;

const long long MOD = 1000000007;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        a[x]++;
    }

    long long ans = 1;
    for(auto [value, cnt] : a)
        ans = (ans * (cnt + 1)) % MOD;

    cout << (ans - 1 + MOD) % MOD;

    return 0;   
}