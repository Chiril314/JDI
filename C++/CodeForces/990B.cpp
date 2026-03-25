#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
    int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	sort(a, a + n);

	set<int> s;
	for(int i = 1; i < n; i++)
		if(a[i] > a[i - 1] && a[i] <= a[i - 1] + k)
			s.insert(a[i - 1]);
    
	int ans = 0;
	for(int i = 0; i < n; i++)
		if(!s.count(a[i]))
			ans++;
            
	cout << ans;

    return 0;
}