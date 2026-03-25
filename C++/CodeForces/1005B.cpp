#include <iostream>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;

	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());

	int n = s.size(), m = t.size(), i = 0, cnt = 0;
	while(true){
		if(s[i] == t[i])
			cnt++;
		else
			break;

		i++;
	}
	cout << max(n + m - 2 * cnt, 0);

    return 0;
}