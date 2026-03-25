#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int grid[n][n];
	for(int i = 0; i < n; i++){
		string s;
        cin >> s;

		for(int j = 0; j < n; j++)
			grid[i][j] = s[j] - '0';
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++){
			bool flag = true;
			for(int x = 0; x < n; x++)
				if(grid[i][x] != grid[j][x])
					flag = false;
			
			if(flag)
                cnt++;

			ans = max(cnt, ans);
		}
	}

	cout << ans;

    return 0;
}