#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x;
        cin >> n >> x;

		vector<long long> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];

		sort(v.begin(), v.end());

		long long ans = 0, k = 0;
		for(int i = n - 1; i >= 0; i--){
			k++;
			if(k * v[i] >= x){
				ans++;
				k = 0;
			}
		}

		cout << ans << endl;
    }

    return 0;
}