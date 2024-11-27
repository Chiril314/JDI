#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t = 1;
	int n, blocks, temp, baseTower;
	
	cin >> t;
	
	while(t--) {
		cin >> n >> baseTower;
		
		vector<int> towers;
		
		for(int i=0; i<n-1; i++) {
			cin >> temp;
			towers.push_back(temp);
		}
		
		sort(towers.begin(), towers.end());
		
		for(int i=0; i<towers.size(); i++) {
			if(towers[i] > baseTower) {
				baseTower = ceil((towers[i] + baseTower) / 2.0);
			} 
		}
		
		cout << baseTower << endl;
	}
	
	return 0;
}
 