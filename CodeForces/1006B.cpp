#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	vector<int> v;
	for(int i = 0; i < n; i++)
		cin >> a[i];
        
    v = a;

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	int s = 0;
	for(int i = 0; i < k; i++)
		s += v[i];

	int cnt = 0;

	vector<int> ans;
	for(int i = 0; i < n; i++){
		cnt++;
		for(int j = 0; j < k; j++){
			if(a[i] == v[j]){
				ans.push_back(cnt);
				cnt = 0;
				v[j] = 0;
				break;
			}
		}
	}

	cout << s << endl;

	int x = 0;
	for(int i = 0; i < ans.size(); i++)
		if(i == ans.size() - 1)
			cout << ans[i] + n - x - ans[i];
		else{
			cout << ans[i] << ' ';
			x += ans[i];
		}

    return 0;
}