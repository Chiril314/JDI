#include <iostream>

using namespace std;

bool ok(int n, int m, string s[], string c){
	for(int i = 1; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < m; j++)
			if(c[j] != s[i][j])
                cnt++;

		if(cnt > 1)
            return false;
	}

	return true;
}

int main(){
	int t;
	cin >> t;

	while(t--){
		int n, m;
		cin >> n >> m;

		string s[n];
		int j = 0;
		for(int i = 0; i < n; i++)
			cin >> s[i];

		string c = "";
		for(int i = 0; i < m; i++)
			c += s[0][i];
		
		bool flag = false;
		if(ok(n, m, s, c)){
			flag = true;
			cout << c << endl;
		}

		for(int j = 0; j < m && !flag; j++){
			for(char i = 'a'; i <= 'z' && !flag; i++){
				if(i != s[0][j]){
					c[j] = i;
					if(ok(n, m, s, c)){
						cout << c << endl;
						flag = true;
					}
				}

				if(flag)
                    break;
			}

			if(flag)
                break;
			c[j] = s[0][j];
		}

		if(!flag)
            cout<< -1 << endl;
	}
    return 0;
}