#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		long long a[n], b[n], mina = 10000000001, minb = 10000000001, ans = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mina = min(mina, a[i]);
		}

		for(int i = 0; i < n; i++){
			cin >> b[i];
			minb = min(minb, b[i]);
		}

		for(int i = 0; i < n; i++)
			ans += max(a[i] - mina, b[i] - minb);
		
		cout << ans << endl;
	}

    return 0;
}