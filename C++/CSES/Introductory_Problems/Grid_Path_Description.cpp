#include <iostream>

using namespace std;

string s;
bool vis[9][9];
int ans = 0;

void dfs(int x, int y, int step){
    if(x == 7 && y == 1){
        if(step == 48)
            ans++;

        return;
    }

    if(step == 48)
        return;

    if(vis[x][y - 1] && vis[x][y + 1] && !vis[x - 1][y] && !vis[x + 1][y])
        return;

    if(vis[x - 1][y] && vis[x + 1][y] && !vis[x][y - 1] && !vis[x][y + 1])
        return;

    vis[x][y] = true;
    char c = s[step];
    if(c == 'U' || c == '?')
        if(!vis[x - 1][y])
            dfs(x - 1, y, step + 1);

    if(c == 'D' || c == '?')
        if(!vis[x + 1][y])
            dfs(x + 1, y, step + 1);

    if(c == 'L' || c == '?')
        if(!vis[x][y - 1])
            dfs(x, y - 1, step + 1);

    if(c == 'R' || c == '?')
        if(!vis[x][y + 1])
            dfs(x, y + 1, step + 1);

    vis[x][y] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;
    for(int i = 0; i < 9; i++){
        vis[0][i] = true;
        vis[8][i] = true;
        vis[i][0] = true;
        vis[i][8] = true;
    }

    dfs(1, 1, 0);
    cout << ans;

    return 0;
}