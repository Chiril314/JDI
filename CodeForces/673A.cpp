#include <iostream>
#include <set>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
	long long n;
	cin >> n;

	set<int> s;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;

		s.insert(x);
	}

	long long ans = 0, cnt = 0;
	for(int i = 1; i <= 90; i++){
		if(s.count(i))
            cnt = 0;
		else 
            cnt++;
		
        ans++;
		if(cnt == 15)
            break;
	}

	cout << ans;

    return 0;
}