#include <iostream>
#include <string>

using namespace std;

int main(){
    char grid[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8 ; j++){
            cin >> grid[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < 8; i++){
        int cnt = 0;
        for(int j = 0; j < 8 ; j++){
            if(grid[i][j] == 'B'){
                cnt++;
            }

            if(cnt == 8){
                ans++;
            }
        }
    }

    if(ans == 8){
        cout << ans;

        return 0;
    }

    for(int j = 0; j < 8; j++){
    int cnt = 0;
    for(int i = 0; i < 8 ; i++){
        if(grid[i][j] == 'B'){
            cnt++;
        }

        if(cnt == 8){
            ans++;
        }
    }
}

    cout << ans;

    return 0;
}