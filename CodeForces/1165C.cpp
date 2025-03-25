#include <iostream>

using namespace std;

int main(){
	int n, ans = 0;
	string s, k = "";

	cin >> n >> s;

	for(int i = 0; i < n; i++)
		if(k.size() % 2 == 0 || k.back() != s[i])
			k.push_back(s[i]);
		
	if(k.size() % 2 != 0)
		k.pop_back();
	
	cout << n - k.size() << endl;
	cout << k;

    return 0;
}