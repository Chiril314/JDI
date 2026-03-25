#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x(n), y(n);
    vector<vector<bool>> flag(2001, vector<bool>(2001, false));
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        x[i] += 1000;
        y[i] += 1000;
        flag[x[i]][y[i]] = true;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++){
            if((x[i] + x[j]) % 2 == 1 || (y[i] + y[j]) % 2 == 1)
                continue;

            ans += flag[(x[i] + x[j]) / 2][(y[i] + y[j]) / 2];
        }

    cout << ans;

    return 0;
}