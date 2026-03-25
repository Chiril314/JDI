#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n+2];
        vector<int> p;
        int used[100001] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i != 0 && a[i-1] == a[i])
                p.push_back(0);
            else{
                p.push_back(a[i]);
                used[p[i]]++;
            }
        }

        bool ans = 0;
        for(int i = 1; i < n; i++){
            if(p[i-1] == 0){
                ans = 1;
                break;
            } else if(p[i] == 0){
                for(int k = p[i-1] - 1; k > 0; --k){
                    if(used[k] == 0){
                        p[i] = k;
                        used[k]++;
                        break;
                    }
                }
            }
        }

        if(ans == 1 || p[n-1] == 0)
            cout << -1 << endl;
        else{
            for(int i = 0; i < n; i++){
				cout << p[i] << ' ';
			}
            cout << endl;
        }
    }

    return 0;
}