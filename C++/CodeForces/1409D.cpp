#include <iostream>

using namespace std;

long long digSum(long long n){
    long long ans = 0;
    while(n > 0){
        ans += n % 10;
        n /= 10;
    }

    return ans;
}

long long digCnt(long long n){
    long long ans = 0;
    while(n > 0){
        ans++;
        n /= 10;
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, s;
        cin >> n >> s;

        long long r = n, c = 1;
        while(digSum(n) > s){
            n /= 10;
            n++;
            c *= 10;
        }

        n *= c;
        cout << n - r << endl;
    }

    return 0;
}