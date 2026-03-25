#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	string s[n];
	for(int i = 0; i < n; i++)
	    cin >> s[i];

	string ans = "";
	int m = s[0].size();
	for(int j = 0; j < m; j++){
		int cnt = 0;
		char r = 'Z';
		bool flag = false;
		for(int i = 0; i < n; i++){
			if(s[i][j] != '?'){
				cnt++;
				if(cnt > 1)
					if(r != s[i][j]){
						ans += '?';
						flag = true;
						break;
					}

				r = s[i][j];
			}
		}

		if(!flag){
			if(r == 'Z')
                r = 'x';

			ans += r;
		}
	}

	cout << ans;

    return 0;
}