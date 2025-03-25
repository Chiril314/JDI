#include <iostream>
#include <algorithm>

using namespace std;

int main(){
 	int n, a, b, k;
	cin >> n >> a >> b >> k;

	int h[n];

	for(int i = 0; i < n; i++)
        cin >> h[i];

	for(int i = 0; i < n; i++){
		h[i] = h[i] % (a + b);

		if(!h[i])
            h[i] += a + b;
		h[i] = ((h[i] + a - 1) / a) - 1;
	}

	sort(h, h + n);

	int ans = 0;
	for(int i = 0; i < n; i++)
		if(k - h[i] >= 0){
			ans++;
			k -= h[i];
		} else
			break;
	
	cout << ans;

    return 0;
}