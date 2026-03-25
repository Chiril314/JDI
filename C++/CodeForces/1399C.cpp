#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}

		vector<int> sums;
		for(int i = 0; i < n - 1; i++)
			for(int j = i + 1; j < n; j++)
				sums.push_back(a[i] + a[j]);

		int ans = 0;
		for(int i = 0; i < sums.size(); i++){
			for(int j = 0; j < n; j++)
				a[j] = b[j];

			int cnt = 0;
			for(int j = 0; j < n - 1; j++){
				for(int k = j + 1; k < n; k++)
					if(a[j] + a[k] == sums[i]){
						cnt++;
						a[j] = -100000;
						a[k] = -100000;
					}
				
				ans = max(ans, cnt);
			}
		}

		cout << ans << endl;
	}

    return 0;
}