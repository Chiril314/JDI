#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	cout << n + 1 << endl;
	cout << 1 << ' ' << n << ' ' << 500000;
	for(int i = 0; i < n; i++)
		cout << endl << 2 << ' ' << i + 1 << ' ' << a[i] + 500000 - i;

    return 0;
}