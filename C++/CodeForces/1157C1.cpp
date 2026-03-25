#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;

	string s = "";

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	int l = 0, r = n - 1;

	vector<int> v;
	v.push_back(0);
	while(true){
		if(v.size() >= n && v[v.size() - 1] != 0)
			break;

		if(a[l] < a[r] && a[l] > v[v.size() - 1]){
			if(v[v.size() - 1] == 0)
				v.pop_back();
	
			v.push_back(a[l]);
			s += 'L';
			l++;
		} else if(a[r] > v[v.size() - 1]){
			if(v[v.size() - 1] == 0)
				v.pop_back();
			
			v.push_back(a[r]);
			r--;
			s += 'R';
		} else if(a[l] > v[v.size() - 1]){
			s += 'L';
			v.push_back(a[l]);
			l++;
		} else
			break;
	}

	cout << v.size() << endl << s;

    return 0;
}