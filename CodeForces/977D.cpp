#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<pair<long long,long long>> v(n);
	long long a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		v[i].second = a[i];
	}

	for(int i = 0; i < n; i++){
		int cnt = 0;
		while(a[i] % 3 == 0){
			a[i] /= 3;
			cnt++;
		}

		v[i].first = - cnt;
	}

	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++)
		cout << v[i].second << ' ';

    return 0;
}