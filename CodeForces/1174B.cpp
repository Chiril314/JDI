#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	long long a[n];
	bool odd = false, even = false;
	for(int i = 0;i<n;i++){
		cin >> a[i];
		if(a[i] % 2 == 0)
			even = true;
	    else
			odd = true;
	}

	if(odd && even){
		sort(a, a + n);
		for(int i = 0; i < n; i++)
			cout << a[i] << ' ';
    } else
		for(int i = 0;i<n;i++)
			cout << a[i] << ' ';

    return 0;
}