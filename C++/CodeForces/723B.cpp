#include <iostream>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n >> s;
	string a = "", b = "";
    
	bool flag = false;
	for(int i = 0; i < n; i++){
		if(s[i] == '('){
			flag = true;
			a += '_';
			continue;
		}

		if(s[i] == ')'){
			flag = false;
			b += '_';
			continue;
		}

		if(flag)
			a += s[i];
		else
			b+= s[i];
		
	}

	int ans1 = 0, ans2 = 0, cnt = 0;
	for(int i = 0; i < b.size(); i++){
		if(b[i] != '_'){
			cnt++;
			ans1 = max(ans1, cnt);
		} else{
			ans1 = max(ans1, cnt);
			cnt = 0;
		}
	}

	a += '_';
	int x = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i] != '_')
			x++;
		else{
			if(x > 0)
				ans2++;
			x = 0;
		}
	}

	cout << ans1 << ' ' << ans2;

    return 0;
}