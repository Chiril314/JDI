#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    long long last = x, curr = x, ans = 0, sum = 0;
    for(long long i = 0; i < n; i++){
        if(i == 0)
            curr = x;
        else
            curr = (a * curr + b) % c;

        sum += curr;
        if(i > k - 2){
            ans ^= sum;
            sum -= last;
            last = (a * last + b) % c;
        }
    }

    cout << ans;

    return 0;
}