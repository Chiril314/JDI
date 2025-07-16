#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<char>> grid(4, vector<char>(4));
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> grid[i][j];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            int cnt1 = 0, cnt2 = 0;
            if(grid[i][j] == '.')
                cnt1++;
            else
                cnt2++;

            if(grid[i][j + 1] == '.')
                cnt1++;
            else
                cnt2++;

            if(grid[i + 1][j] == '.')
                cnt1++;
            else
                cnt2++;

            if(grid[i + 1][j + 1] == '.')
                cnt1++;
            else
                cnt2++;

            if(cnt1 > 2 || cnt2 > 2){
                cout << "YES";
                return 0;
            }
        }

    cout << "NO";

    return 0;
}