#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];
    
    long long ans = 0, cnt = 0;
	for(int i = 0; i < n; i++){
		cnt = i;
		while(cnt < n - 1 && a[cnt + 1] <= a[cnt] * 2)
			cnt++;

		ans = max(ans, cnt - i + 1);
		i = cnt;
	}

    cout << ans;

    return 0;
}