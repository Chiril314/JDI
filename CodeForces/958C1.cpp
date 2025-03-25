#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	long long n, m;
	cin >> n >> m;

	long long a[n], s = 0;
	vector<long long> v;

	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	vector<long long> prefix(n, 0);
    vector<long long> suffix(n, 0);

	prefix[0] = a[0];
	for(int i = 1; i < n - 1; i++)
		prefix[i] = a[i] + prefix[i - 1];
	
	suffix[n - 1] = a[n - 1];
	for(long long i = (n - 2); i >= 1; i--)
		suffix[i] = a[i] + suffix[i + 1];
	
	long long ans = 0;
	for(long long i = 0; i < n - 1; i++){
		long long sum1 = (prefix[i] % m);
		long long sum2 =(suffix[i + 1] % m);

		ans = max(ans, sum1 + sum2);
	}
    
	cout << ans;

    return 0;
}