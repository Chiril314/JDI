#include <iostream>

using namespace std;

int main(){
    int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		bool zero= true;
		for(int i = 0; i < n; i++)
			if(a[i] != i + 1)
				zero = false;

		if(zero){
			cout << 0 << endl;
			continue;
		}

		if(a[0] != 1){
			int l = 0;
			for(int i = 0; i < n; i++)
				if(a[i] != i + 1)
					l++;
				else
					break;
				
			
			int r = 0;
			for(int i = n-1;i >= 0;i--)
				if(a[i] == i + 1)
					r++;
				else
					if(i != n - 1)
						break;

			if(r + l == n)
				cout << 1 << endl;
			else
				cout << 2 << endl;

			continue;
		} else if(a[0] == 1){
			int l = 0, r = 0;
			for(int i = 0; i < n; i++)
				if(a[i] == i + 1)
					l++;
				else
					break;
				
			for(int i = n - 1; i >= 0; i--)
				if(a[i] != i + 1)
					r++;
				else
					if(i != n - 1)
                        break;
			
			if(r + l == n)
				cout << 1 << endl;
			else
				if((a[n - 1] == n || a[n - 1] != n) && l + r == n - 1)
					cout << 1 << endl;
				else
				    cout << 2 << endl;
				
			continue;
		}

		cout << 2 << endl;
	}

    return 0;
}