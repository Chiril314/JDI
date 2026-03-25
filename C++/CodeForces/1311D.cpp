#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
	cin >> t;

	while(t--){
		int a, b, c;
		cin >> a >> b >> c;

		int ans = 1e5, ans_a, ans_b, ans_c, cnt = 0;
		for(int i = 1; i <= 2 * a; i++){
			for(int j = i; j <= 2 * b; j += i){
				int k = j * (c / j);
				cnt = abs(i - a) + abs(j - b) + abs(k - c);
                if(ans >= cnt){
                    ans = cnt;
                    ans_a = i;
                    ans_b = j;
                    ans_c = k;
                }

				k = j * (c / j) + j;
				cnt = abs(i - a) + abs(j - b) + abs(k - c);
                if(ans >= cnt){
                    ans = cnt;
                    ans_a = i;
                    ans_b = j;
                    ans_c = k;
                }
			}
		}
        
		cout << ans << endl << ans_a << ' ' << ans_b << ' ' << ans_c << endl;
	}

    return 0;
}