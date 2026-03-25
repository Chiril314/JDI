#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, cnt = 0;
    cin >> n >> m;

    vector<bool> used(n, false);
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
            a[i][j] = s[j] - '0';
    }

    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = 0; j < m; j++){
            flag = true;
            for(int k = 0; k < n; k++)
                if(a[i][j] < a[k][j])
                    flag = false;

            if(flag){
                cnt++;
                break;
            }
        }
    }

    cout << cnt;


    return 0;
}