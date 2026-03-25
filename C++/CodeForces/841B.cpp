#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;

    int check = 0;
	for(int i = 0; i < n; i++){
        int a;
		cin >> a;
		check += a % 2;
	}

	if(check > 0)
		cout << "First";
	else
		cout << "Second";
	
	return 0;
	
}