#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
	cin >> t;

	while(t--){

		int n;
		string a, b;

		cin >> n >> a >> b;

		vector<int> v;
        vector<int> z;

		a += '0';
		for(int i = 0; i < n; i++)
			if(a[i] != a[i + 1])
				v.push_back(i + 1);
			
		b += '0';
		for(int i = 0; i < n; i++)
			if(b[i] != b[i + 1])
				z.push_back(i + 1);
			
		reverse(z.begin(), z.end());

		cout << v.size() + z.size() << ' ';
		for(int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
		
		for(int i = 0; i < z.size(); i++)
			cout << z[i] << ' ';
		
		cout << endl;
	}

    return 0;
}