#include <iostream>

using namespace std;

int main(){
    int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}

		int l = -1;
		for(int i = 0; i < n; i++){
			if(a[i] >= i){
				l = i;
			} else{
				break;
			}
		}

		int j = 0, r = n;
		for(int i = n - 1; i >= 0; i--){
			if(a[i] >= j){
				r = i;
				j++;
			} else{
				break;
			}
		}

		if(r <= l){
			cout << "YES" << endl;
			continue;
		}

		cout << "NO" << endl;
	}

    return 0;
}