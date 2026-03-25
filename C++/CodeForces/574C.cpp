#include <iostream>

using namespace std;

int main(){
    int n;
	cin >> n;

	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];

		while(a[i] % 2 == 0)
			a[i] /= 2;

		while(a[i] % 3 == 0)
			a[i] /= 3;
	}

	for(int i = 0; i < n; i++)
		if(a[i] != a[0]){
			cout << "No";
			return 0;
		}

	cout << "Yes";

    return 0;
}