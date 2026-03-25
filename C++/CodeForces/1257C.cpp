#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
		int n;
		cin >> n;

		int a[n], ans = 1e9;
		vector<int> v(n, -1);

		for(int i = 0; i < n; i++){
			cin >> a[i];
			a[i]--;
		}

		for(int i = 0; i < n; i++){
			if(v[a[i]] != -1)
				ans = min(ans, i - v[a[i]] + 1);
			
			v[a[i]] = i;
		}
        
		if(ans == 1e9)
			cout << -1 << endl;
		else
			cout << ans << endl;
    }

    return 0;
}