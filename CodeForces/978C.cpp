#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	long long a[n], s = 0;
	for(int i = 0; i < n; i++)
		cin >> a[i];

	int f = 0;
	for(int i = 0; i < m; i++){
		long long x;
		cin >> x;

		while(s + a[f] < x)
			s+= a[f++];

		cout << f + 1 << ' ' << x - s << endl;
	}
    
	return 0;
}