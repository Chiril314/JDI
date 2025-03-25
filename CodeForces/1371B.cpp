#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
		long long n, r;
		cin >> n >> r;

		long long ans = 0;
		if(n <= 1)
			cout << 1 << endl;
		else{
			if(n <= r){
				r = n - 1;
				ans = 1;
			}

		    cout << ans + ((1 + r) * r) / 2 << endl;
		}
    }

    return 0;
}