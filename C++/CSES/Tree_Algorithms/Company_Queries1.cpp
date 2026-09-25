#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const long long LOG = 18;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, q;
    cin >> n >> q;

    vector<vector<long long>> up(n, vector<long long>(LOG, -2));
    for(long long i = 1; i < n; i++){
        cin >> up[i][0];
        up[i][0]--;
    }

    for(long long i = 1; i < LOG; i++){
        for(long long j = 1; j < n; j++){
            if(up[j][i - 1] == -2)
                continue;
            up[j][i] = up[up[j][i - 1]][i - 1];
        }
    }

    while(q--){
        long long x, k, jump;
        cin >> x >> k;

        long long ans = x - 1;
        while(k > 0){
            jump = (long long)(log2(k));
            ans = up[ans][jump];
            if(ans == -2)
                break;

            k -= pow(2, jump);
        }

        cout << ans + 1 << "\n";
    }

    return 0;
}