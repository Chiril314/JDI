#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	long long a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];

	vector<long long> even;
    vector<long long> odd;

	sort(a, a + n);

	for(int i = 0; i < n; i++){
		if((i + 1) % 2 == 1)
			odd.push_back(a[i]);
		else
			even.push_back(a[i]);
	}

	reverse(even.begin(), even.end());

	for(int i = 0; i < odd.size(); i++)
		cout << odd[i] << ' ';

	for(int i = 0; i < even.size(); i++)
		cout << even[i] << ' ';

    return 0;
}