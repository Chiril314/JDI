#include <iostream>

using namespace std;

int n, m;
char **grid;

void initgrid(){
    grid = new char*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new char[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt;
    char flag, check;
    cin >> n >> m;

    initgrid();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(grid[i][j] != '*'){
                flag = grid[i][j];
                cnt = 0;
                if(i - 1 >= 0 && j - 1 >= 0 && grid[i - 1][j - 1] == '*')
                    cnt++;
                if(i - 1 >= 0 && grid[i - 1][j] == '*')
                    cnt++;
                if(i - 1 >= 0 && j + 1 < m && grid[i - 1][j + 1] == '*')
                    cnt++;
                if(j + 1 < m && grid[i][j + 1] == '*')
                    cnt++;
                if(i + 1 < n && j + 1 < m && grid[i + 1][j + 1] == '*')
                    cnt++;
                if(i + 1 < n && grid[i + 1][j] == '*')
                    cnt++;
                if(i + 1 < n && j - 1 >= 0 && grid[i + 1][j - 1] == '*')
                    cnt++;
                if(j - 1 >= 0 && grid[i][j - 1] == '*')
                    cnt++;

                if(cnt == 0)
                    check = '.';
                else
                    check = cnt + '0';

                if(check == flag)
                    continue;
                else{
                    cout << "NO";
                    return 0;
                }
            }   

    cout << "YES";

    return 0;
}