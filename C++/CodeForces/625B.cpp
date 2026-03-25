#include <iostream>

using namespace std;

int main(){
    string s, t;
	cin >> s >> t;

	int ans = 0, n = s.size() - t.size() + 1;
	for(int i = 0; i < n; i++)
		if(t == s.substr(i, t.size())){
			ans++;
			s[i + t.size() - 1] = '#'; 
		}

	cout << ans;

    return 0;
}