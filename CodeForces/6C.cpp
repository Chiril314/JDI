#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int z[n];
	for(int i = 0; i < n; i++)
		cin >> z[i];
	
	int a = 0, b = 0, i = 0, j = n - 1;
    while(i <= j){
        if(a <= b){
            a += z[i];
            i++;
        } else{
            b += z[j];
            j--;
        }
    }

    cout << i << " " << n - i << endl;

    return 0;
}