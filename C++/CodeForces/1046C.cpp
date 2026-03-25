#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, d;
	cin >> n >> d;

	d--;

	vector<int> s(n);
	vector<int> v(n);

	for(int i = 0; i < n; i++)
		cin >> s[i];
	
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	s[d] += v[0];

	int ans = d + 1;
	for(int i = 0; i < d; i++)
		if(s[d] >= s[i] + v[v.size() - 1]){
			ans--;
			v.pop_back();
		}
	
	cout << ans;

    return 0;
}