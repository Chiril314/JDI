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
		for(int i = 0; i < n; i++)
			if(a[i] != b[i]){
				v.push_back(i + 1);
				v.push_back(1);
				v.push_back(i + 1);
			}

		cout << v.size() << ' ';
		for(int  i = 0; i < v.size(); i++)
			cout << v[i] << ' ';

		cout << endl;
	}

    return 0;
}