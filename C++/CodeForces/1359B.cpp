#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        char grid[n][m];
        int ans = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];

        bool flag = false;
        if(y >= 2 * x)
            flag = true;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '.'){
                    if(!flag && j + 1 < m && grid[i][j + 1] == '.'){
                        ans += y;
                        j++;  
                    } else
                        ans += x;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}