#include <iostream>

using namespace std;

int main(){
    int t;
	cin >>t;

	while(t--){
		int n;
		cin >> n;

		long long a;
		long long cnt1 = 0, cnt2 = 0, ans = 0;
		for(long long i = 0; i < n; i++){
			cin >> a;
			if(a % 3 == 0)
				ans++;
			if(a % 3 == 1)
				cnt1++;
			if(a % 3 == 2)
				cnt2++;
		}

        long long check = min(cnt1, cnt2);
		ans += check;
		cnt1 -= check;
		cnt2 -= check;

		ans += cnt1 / 3;
		ans += cnt2 / 3;
		cout << ans << endl;
    }

    return 0;
}