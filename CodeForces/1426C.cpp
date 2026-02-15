#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, mn = INT_MAX;
        cin >> n;

        for(long long i = 1; i * i <= n; i++){
            long long moves = i - 1 + (n - 1) / i;
            mn = min(moves, mn);

            moves = n / i - 1 + (n - 1) / (n / i);
            mn = min(moves, mn);
        }

        cout << mn << endl;
    }

    return 0;
}