#include <iostream>

using namespace std;

int main(){ 
    long long n;
	cin >> n;

	bool check;
	long long x[n],h[n];
	for(int i = 0; i < n; i++)
		cin >> x[i] >> h[i];

	long long ans = 0, limit[n];
	for(int i = 0; i < n; i++){
		if(x[i] - h[i] > x[i - 1]  || i == 0)
			check = true;
		else
			check = false;

		if(check)
			ans++;
		else
			if(x[i] + h[i] < x[i + 1] || i == n - 1){
				x[i] = x[i] + h[i];
				ans++;
			}
    }

	cout << ans;

    return 0;   
}