#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x, y, sd1 = 0, sd2 = 0;
    cin >> n;

    vector<vector<long long>> a(n, vector<long long>(n));
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 0){
                x = i;
                y = j;
            }
        }
    }

    if(n == 1){
        cout << 1;
        return 0;
    }

    vector<long long> sr(n, 0), sc(n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sr[i] += a[i][j];
            sc[j] += a[i][j];
        }
    }

    int r = (x == 0 ? 1 : 0);
    long long t = sr[r];

    long long ans = t - sr[x];
    if(ans <= 0){
        cout << -1;
        return 0;
    }

    a[x][y] = ans;
    sr[x] += ans;
    sc[y] += ans;

    for(int i = 0; i < n; i++)
        if(sr[i] != t || sc[i] != t){
            cout << -1;
            return 0;
        }

    for(int i = 0; i < n; i++){
        sd1 += a[i][i];
        sd2 += a[i][n - i - 1];
    }

    if(sd1 != t || sd2 != t){
        cout << -1;
        return 0;
    }

    cout << ans;

    
    return 0;
}