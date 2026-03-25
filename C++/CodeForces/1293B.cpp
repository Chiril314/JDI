#include <iostream>

using namespace std;

int main(){
	double n;
	cin >> n;

	double ans = 0.000000000000;
	for(double i = 1;i <= n; i++)
		ans += (1.0 / i);

	cout << ans;

    return 0;
}