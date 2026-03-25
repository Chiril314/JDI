#include <iostream>

using namespace std;

int main(){
	string a, c;
	cin >> a >> c;

	for(int i = 0; i < c.size(); i++)
		if(c[i] > a[i]){
			cout << -1;
			return 0;
		}

	cout << c;

    return 0;
}