#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int grid[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                char x;
                cin >> x;

                grid[i][j] = x - '0';
            }
        }

        bool ans = true;
        for(int i = n - 2; i >= 0; i--){
            for(int j = n - 2; j >= 0; j--){
                if(grid[i][j] == 1 && grid[i + 1][j] != 1 && grid[i][j + 1] != 1){
                    ans = false;
                }
            }
        }   

        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}