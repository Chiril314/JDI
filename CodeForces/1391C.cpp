#include <iostream>

using namespace std;

const long long mod = 1e9 + 7;

int main(){
	long long n, x = 1, div = 1;
	cin >> n;

	for(long long i = 2; i <= n; i++){
		x = (x * i) % mod;
		div = (div * 2) % mod;
	}

	long long ans = (x - div + mod) % mod;
	cout << ans;

    return 0;
}