#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    if(n % 2 == 0 || n == 1){
        cout << -1;
        return 0;
    }

    a[0] = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i + 1];
    
    int cnt = 0;
    for(int i = n; i >= 2; i--){
        while(a[i] > 0 && i % 2 == 0){
            int k = i / 2;
            a[i]--;

            a[k] = max(a[k] - 1, 0);
            a[2 * k + 1] = max(a[2 * k + 1] - 1, 0);

            cnt++;
        }

        while(a[i] > 0 && i % 2 == 1){
            int k = (i - 1) / 2;
            a[i]--;

            a[k] = max(a[k] - 1, 0);
            a[2 * k] = max(a[2 * k] - 1, 0);

            cnt++;
        }
    }

    cnt += a[1];
    cout << cnt;

    return 0;
}