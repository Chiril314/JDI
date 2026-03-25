#include <iostream>
#include <algorithm>

using namespace std;

int** map;
int** dp; 
int x, y;

int dx[] = {-1, 1, 0, 0}; 
int dy[] = {0, 0, -1, 1};

void q(int n, int m){
    x = n;
    y = m;
}

void createMap(){
    map = new int*[x];
    dp = new int*[x];

    for(int i = 0; i < x; i++){
        map[i] = new int[y];
        dp[i] = new int[y];  
        fill(dp[i], dp[i] + y, -1);
    }

    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            cin >> map[i][j];
}

int dfs(int posX, int posY){
    if(dp[posX][posY] != -1)
        return dp[posX][posY];

    int maxLength = 1; 

    for(int i = 0; i < 4; i++){
        int newX = posX + dx[i];
        int newY = posY + dy[i];

        if(newX >= 0 && newX < x && newY >= 0 && newY < y && map[newX][newY] > map[posX][posY]) 
            maxLength = max(maxLength, 1 + dfs(newX, newY));
    }

    dp[posX][posY] = maxLength;
    return maxLength; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    q(n, m);
    createMap();

    int ans = 0;
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            ans = max(ans, dfs(i, j)); 

    cout << ans;

    return 0;
}