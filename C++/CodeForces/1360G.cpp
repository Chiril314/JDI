#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        if(a * n != b * m){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        vector<vector<int>> grid(n, vector<int>(m, 0));

        int x = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < a; j++){
                grid[i][(x + j) % m] = 1;
            }
            x = (x + a) % m;  
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << grid[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}