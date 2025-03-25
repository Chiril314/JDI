#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int cnt = n / 4;

		string ans = "";
		if(n % 4)
           cnt++;

		int s = n - cnt;
		for(int i = 0; i < s; i++)
			ans += '9';

		for(int i = 0; i < cnt; i++)
			ans += '8';

		cout <<  ans << endl;
	}

    return 0;
}