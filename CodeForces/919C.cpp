#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<string> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++)
            if(c[i][j] == '.'){
                cnt++;
                if(cnt >= k)
                    ans++;
            } else
                cnt = 0;
    }

    for(int j = 0; j < m; j++){
        int cnt = 0;
        for(int i = 0; i < n; i++)
            if(c[i][j] == '.'){
                cnt++;
                if(cnt >= k && k != 1)
                    ans++;
            } else
                cnt = 0;
    }

    cout << ans;

    return 0;
}