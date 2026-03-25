#include <iostream>

using namespace std;

int main(){
 	int n;
	cin >> n;

	if(n % 2 == 0){
		while(n > 1){
			cout << '1';
			n -= 2;
		}

		return 0;
	}

	cout << '7';

	n -= 3;
	while(n > 1){
		cout << '1';
		n -= 2;
	}

    return 0;
}