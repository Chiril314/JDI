#include <iostream>

using namespace std;

int main(){
	long long n, m, k;
	cin >> n >> m >> k;

	if(k < n)
		cout << k + 1 << ' ' << 1;
	else{
		k -= n;

		long long r = k / (m - 1);
		cout << n - r << ' ';

		if(r % 2 == 0)
			cout << k % (m - 1) + 2;
		else
			cout << m - (k % (m - 1));
	}

    return 0;
}