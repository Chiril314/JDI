#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	vector<pair<int,int>> v;

	int b[n];
	for(int i = 0; i < n; i++){
		cin >> b[i];
		v.push_back({a[i] - b[i], i});
	}

	sort(v.begin(), v.end());

	int s = 0;
	for(int i = 0; i < v.size(); i++){
		if(k == 0)
            break;

		s += a[v[i].second];
		a[v[i].second] = 0;
		b[v[i].second] = 0;
		k--;
	}

	for(int i = 0; i < n; i++){
		if(a[i] < b[i])
			s+= a[i];
		else
			s+= b[i];
		
	}

	cout << s;

    return 0;
}