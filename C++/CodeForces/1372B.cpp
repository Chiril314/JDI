#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		long long n;
		cin >> n;

		long long a = 1, b;
		for(int i = 2;i <= sqrt(n); i++)
			if(n % i == 0){
				a = n / i;
				break;
			}

		b = n - a;
        
		cout << a << ' ' << b << endl;
    }

    return 0;
}