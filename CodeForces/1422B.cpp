#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<long long>> a(n, vector<long long>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> a[i][j];

        long long ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                vector<long long> ar = {a[i][j], a[i][m - 1 - j], a[n - 1 - i][m - j - 1], a[n - 1 - i][j]};
                sort(ar.begin(), ar.end());

                long long need = ar[1], cnt = 0;
                cnt += abs(a[i][j] - need);
                a[i][j] = need;

                cnt += abs(a[i][m - 1 - j] - need);
                a[i][m - 1 - j] = need;

                cnt += abs(a[n - 1 - i][m - j - 1] - need);
                a[n - 1 - i][m - j - 1] = need;

                cnt += abs(a[n - 1 - i][j] - need);
                a[n - 1 - i][j] = need;

                ans += cnt;
            }

        cout << ans << endl;
    }

    return 0;
}