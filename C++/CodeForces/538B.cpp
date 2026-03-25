#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ans;
    while(n){
        int k = n, m = 0, p = 1;
        while(k){
            if (k % 10)m += p;
            k /= 10; p *= 10;
		}

		ans.push_back(m);
        n -= m;
    }

    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}