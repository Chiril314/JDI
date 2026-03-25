#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		long long a, b = n % 14;

		a = n / 14;
		if(a > 0 && b > 0 && b < 7)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

    return 0;
}