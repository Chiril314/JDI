#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int n, r;
	cin >> n >> r;

	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	int k = 0, ls = -1;
	while(ls <= n - 2){
		int p = -1;
		for(int i = n - 1 ;i > - 1 && i > ls - r + 1; i--){
			if(a[i] && i - r < ls + 1){
				p = i;
				break;
			}
		}

		if(p < 0){
			cout << "-1";
			return 0;
		}

		k++;
		ls = p + r - 1;
	}

	cout << k;

    return 0;
}