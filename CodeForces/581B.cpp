#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    	int n;
		cin >> n;

		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		vector<int> ans;
		int Max = 0;
		for(int i = n - 1; i >= 0; i--){
			if(a[i] > Max)
				ans.push_back(0);
			else
				ans.push_back(Max - a[i] + 1);
			
			Max = max(Max, a[i]);
		}

		reverse(ans.begin(), ans.end());
		for(int i = 0; i < ans.size(); i++)
			cout << ans[i] << ' ';

    return 0;
}