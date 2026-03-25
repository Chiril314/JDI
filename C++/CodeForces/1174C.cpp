#include <iostream>

using namespace std;

int main(){
	int n, a[1000001];
	cin >> n;

	int m = 1;
	for(int i = 2; i <= n; i++){
		bool flag = false;
		for(int j = i; j <= n; j += i){
			if(!a[j]){
				a[j] = m;
				flag = true;
			}
		}

		if(flag)
            m++;
	}

	for(int i = 2; i <= n; i++)
		cout << a[i]<< ' ';

    return 0;
}