#include <iostream>

using namespace std;

int main(){
    int prime[19] = {2, 3, 5, 7, 4, 9, 25, 49, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
	string s;

	int div = 0;
	for(int i = 0; i < 19;i++){
		cout << prime[i] << endl;

		cin >> s;
		if(s == "yes")
			div++;
	}

	if(div >= 2)
		cout << "composite" << endl;
	else
		cout << "prime" << endl;

    return 0;
}