#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int n;
	cin >> n;

	long long x = 0, y = 0;
	long long a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	sort(a, a + n);
	reverse(a, a + n);

	int m = n - ((n + 1) / 2) + 1;
	for(int i = 0; i < (n + 1) / 2; i++)
		x += a[i];
	
	for(int i = (n + 1) / 2; i < n; i++)
		y += a[i];
	
	cout << (x * x) + (y * y);

    return 0;
}