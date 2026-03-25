#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;

	int check1 = 0, ans = 0, check2 = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '+'){
			check1++;
			ans = max(check1,ans);
		} else{
			check1--;
			check2 = min(check1,check2);
		}
	}

	cout << ans - check2;

	return 0;
}