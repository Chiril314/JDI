#include <iostream>

using namespace std;

int main(){
	int n, s, t;
	cin >> n >> s >> t;

	int p[n];
	for(int i = 1;i<=n;i++)
		cin >> p[i];

	int poz = s;
	if(poz == t){
		cout << 0;
		return 0;
	}

	int cnt=0;
	while(p[poz] != s){
		cnt++;
		if(p[poz] == t){
			cout << cnt;
			return 0;
		}

		poz = p[poz];
	}

	cout << -1;

    return 0;
}