#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<long long> a(n);
    long long ans = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
		ans += a[i];

		if(i > 0)
			ans += (a[i] - 1) * i;
	}
    
	cout << ans;

    return 0;
}