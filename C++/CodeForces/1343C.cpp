#include <iostream>

using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--) {
        int n;
		cin >> n;

		long long a[n];
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];

		long long s = 0;
		long long now = a[0];

		for(int i = 1; i < n; i++){
			if(now * a[i] < 0){ 
				s += now;
				now = a[i];
			} else 
				now = max(now, a[i]);
		}

		s += now;
		cout << s << endl;
	}

	return 0;
}