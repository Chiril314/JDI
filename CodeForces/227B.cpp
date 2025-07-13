#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	int n;
	cin >> n;

	vector<long long> a(n + 1);
    vector<long long> cnt1(n + 1, 0), cnt2(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		if(!cnt1[a[i]]){
			cnt1[a[i]] = i;
		}
		cnt2[a[i]] = i;
	}

	long long m;
	cin >> m;

	long long ans1 = 0, ans2 = 0;
	while(m--){
		long long x;
		cin >> x;
		ans1 += cnt1[x];
		ans2 += n - cnt2[x] + 1;
	}

	cout << ans1 << ' ' << ans2; 

    return 0;
}