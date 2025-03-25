#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    char grid[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 'W'){ 
                if(i > 0 && grid[i - 1][j] == 'P'){ 
                    grid[i - 1][j] = '.'; 
                    ans++;
                } else if(i < n - 1 && grid[i + 1][j] == 'P'){
                    grid[i + 1][j] = '.';
                    ans++;
                } else if(j > 0 && grid[i][j - 1] == 'P'){
                    grid[i][j - 1] = '.';
                    ans++;
                } else if(j < m - 1 && grid[i][j + 1] == 'P'){
                    grid[i][j + 1] = '.';
                    ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}