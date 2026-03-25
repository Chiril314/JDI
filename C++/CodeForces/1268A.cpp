#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int n, k;
	string s;
	cin >> n >> k >> s;

	vector<int> a(n);
	for(int i = 0; i < k; i++)
		a[i] = s[i] - '0';

	for(int i = k; i < n; i++)
		a[i] = a[i - k];
	

	bool ok = true;
	for(int i = 0; i < n; i++){
		if(a[i] > s[i] - '0')
            break;
		if(a[i] < s[i] - '0')
            ok = false;
	}

	cout << n << '\n';
	if(ok){
		for(int i = 0; i < n; i++)
            cout << a[i];
		return 0;
	}

	int idx = -1;
	for(int i = k - 1; i >= 0; i--)
		if(a[i] != 9){
			a[i]++;
			idx = i;
			break;
		}

	for(int i = idx + 1; i < k; i++)
		a[i] = 0;
	
	for(int i = k; i < n; i++)
		a[i] = a[i - k];

    for(int i = 0; i < n; i++)
        cout << a[i];

    return 0;
}