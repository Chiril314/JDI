#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
		int n;
		cin >> n;

		int a, b, c;
		cin >> a >> b >> c;

		string s;
		cin >> s;

		int cnt = 0;
		string ans = s;

		for(int i = 0; i < n; i++)
			ans[i] = '0';

		int r = 0, p = 0, sc = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'R')
				r++;
			else if(s[i] == 'S')
				sc++;
			else if(s[i] == 'P')
				p++;
		}

		int Ans = min(b, r) + min(c, p) + min(a, sc);
		if(Ans * 2 >= n){
			cout << "YES" << endl;
			for(int i = 0; i < n; i++){
				if(s[i] == 'R' && b > 0){
					ans[i] = 'P';
					b--;
				} else if(s[i] == 'P' && c > 0){
					ans[i] = 'S';
					c--;
				} else if(s[i] == 'S' && a > 0){
					ans[i] = 'R';
					a--;
				}
			}

			for(int i = 0; i < n; i++){
				if(ans[i] == '0'){
					if(a > 0){
						ans[i] = 'R';
						a--;
					} else if(b > 0){
						ans[i] = 'P';
						b--;
					} else if(c>0){
						ans[i] = 'S';
						c--;
					}
				}
			}

			for(int i = 0; i < n; i++)
				cout << ans[i];
		} else
			cout << "NO";

        cout << endl;
    }

    return 0;
}