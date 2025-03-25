#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n;
	cin >> n;

	vector<long long> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
    
	long long s = 0, x = n;
	s += v[0] * x;
	for(long long i = 1; i < n; i++){
		s += v[i] * x;
		x--;
	}

	cout << s;

    return 0;
}