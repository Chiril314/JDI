#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;

	int b[n];
	for(int i = 0; i < n; i++)
		cin >> b[i];

	vector<int> a;
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			a.push_back(b[i] + b[j]);

	sort(a.begin(), a.end());

	int cnt = 1, ans = 1;
	for(int i = 1; i < a.size(); i++){
		if(a[i] == a[i - 1]){
			cnt++;
			ans = max(ans, cnt);
		} else{
			ans = max(ans, cnt);
			cnt = 1;
		}
	}

	cout << ans;

    return 0;
}