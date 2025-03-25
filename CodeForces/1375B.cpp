#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
		int n, m;
		cin >> n >> m;

		int a[n][m];
		bool flag = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if((i == 0 && j == 0) || (i == n - 1 && j == m - 1) || (i == 0 && j == m - 1) || (i == n - 1 && j == 0)){
					if(a[i][j] <= 2)
						a[i][j] = 2;
					else
						flag = 1;
				} else if(i == 0 || j == 0 || i == n - 1 || j == m - 1){
					if(a[i][j] <= 3)
						a[i][j] = 3;
					else
						flag = 1;
				} else if(a[i][j] <= 4)
					a[i][j] = 4;
				else
					flag = 1;
			}
		}

		if(!flag){
			cout << "YES" << endl;
			for(int i = 0; i < n; i++){
				for(int j = 0; j < m; j++)
					cout << a[i][j] << ' ';
				cout << endl;
			}
		} else
			cout << "NO" << endl;
    }

    return 0;
}