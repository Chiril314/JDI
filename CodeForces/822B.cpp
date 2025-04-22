#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m;
    cin >> n >> m;

	string s, k;
	cin >> s >> k;

	vector<int> p(1001, 1);
	for(int i = 0; i < m - n + 1; i++){
		vector<int> c;
		for(int j = 0; j < n; j++)
			if(k[i + j] != s[j])
				c.push_back(j);

		if(p.size() > c.size())
			p = c;
	}

	cout << p.size() << endl;
	for(int i = 0; i < p.size(); i++)
		cout << p[i] + 1 << ' ';

    return 0;
}