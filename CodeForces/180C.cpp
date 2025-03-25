#include <iostream>

using namespace std;

int main(){
    string s;
	cin >> s;
    
	int cnt = 0, ans = 0;
	for(int i = 0; i < s.size(); i++)
		if(s[i] > 'Z')
			cnt++;
		else
			ans = min(ans + 1, cnt);

	cout << ans;

    return 0;
}