#include <iostream>

using namespace std;

int main(){
    int k;
	cin >> k;

	if(k % 2 == 0 && k > 36){
		cout << -1;
		return 0;
	} else if(k % 2 == 1 && k > 35){
		cout << -1;
		return 0;
	}

	while(k > 1){
		cout << '8';
		k -= 2;
	}

	if(k > 0)
		cout << 6;

    return 0;
}