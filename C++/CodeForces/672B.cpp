#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
	string s;

	cin >> n >> s;
	if(n>26){
		cout << -1;
		return 0;
	}

    vector<int> a(26, 0);
    for(int i = 0; i < s.size(); i++)
        a[s[i] - 'a']++;

    int cnt = 0;
    for(int i = 0; i < 26; i++)
        if(a[i] > 0)
            cnt++;

	cout << n - cnt;

    return 0;
}