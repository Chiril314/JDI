#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
    
	int ans = 0, j = 0, n = s.size();
	for(int i = 0; i < n - 3; i++)
		if(s.substr(i, 4) == "bear"){
			ans += ((i + 1 - j) * (n - (i + 3)));
			j = i + 1;
		}

	cout << ans;

    return 0;
}