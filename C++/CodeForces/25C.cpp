#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n;

    vector<vector<int>> d(n, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> d[i][j];

    cin >> k;
    for(int l = 0; l < k; l++){
        int x, y, w;
        cin >> x >> y >> w;

        x--;
        y--;

        d[x][y] = d[y][x] = min(d[x][y], w);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                d[j][x] = d[x][j] = min(d[j][x], d[j][i] + d[i][x]);
                d[j][y] = d[y][j] = min(d[j][y], d[j][i] + d[i][y]);
            }

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                d[i][j] = min({d[i][j], d[i][x] + d[j][x], d[i][y] + d[j][y]});
        
        long long ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                ans += d[i][j];
        
        cout << ans << ' ';
    }

    return 0;
}