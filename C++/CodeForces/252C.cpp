#include <iostream>

using namespace std;

int main(){
    long long n, d;
	cin >> n >> d;

	long long a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	long long l = 0, r = 0, ans = 0;
	while(l < n){
		while(r < n && a[r] - a[l] <= d)
			r++;
		
		r--;
		long long f = r - l;
		ans += f * (f - 1) / 2;
		l++;
	}

	cout << ans;

    return 0;
}