#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		bool flag = false;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == k)
                flag = true;
		}

		if(!flag){
			cout << "no" << endl;
			continue;
		}

		if(n == 1){
			cout << "yes" << endl;
			continue;
		}

		if(n == 2){
			if(a[0] >= k && a[1] >= k){
				cout << "yes" << endl;
			} else{
				cout << "no" << endl;
			}
			continue;
		}

		flag = false;
		for(int i = 1; i < n - 1; i++){
			if(a[i - 1] >= k && a[i] >= k)
                flag = true;
			if(a[i + 1] >= k && a[i] >= k)
                flag = true;
			if(a[i - 1] >= k && a[i + 1] >= k)
                flag = true;
		}

		if(flag){
			cout << "yes" << endl;
		} else{
			cout << "no" << endl;
		}
	}

    return 0;
}