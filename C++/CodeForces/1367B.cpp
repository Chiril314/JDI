#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
		int n;
		cin >> n;

		int a[n];
		int cnt1 = 0, cnt2 = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] % 2 == 1 && i % 2 == 0)
				cnt1++;
			else if(a[i] % 2 == 0 && i % 2 == 1)
				cnt2++;
		}

		if(cnt1 == cnt2)
		    cout << (cnt1+cnt2) / 2 << endl;
		else
			cout << -1 << endl;	
    }

    return 0;
}