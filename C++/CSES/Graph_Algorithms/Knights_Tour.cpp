#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> board(8, vector<int> (8));
vector<int> dx = {2, 2, -2, -2, 1, 1, -1, -1}, dy = {1, -1, 1, -1, 2, -2, 2, -2};

struct Move{
    int cnt;
    int x;
    int y;
};

int countMoves(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && board[nx][ny] == 0)
            cnt++;
    }

    return cnt;
}

bool dfs(int x, int y, int step){
    board[x][y] = step;
    if(step == 64)
        return true;

    vector<Move> candidates;
    for(int i = 0; i < 8; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && board[nx][ny] == 0){
            int cnt = countMoves(nx, ny);
            candidates.push_back({cnt, nx, ny});
        }
    }

    sort(candidates.begin(), candidates.end(), [](const Move& a, const Move& b){
        return a.cnt < b.cnt;
    });
    for(Move candidate : candidates)
        if(dfs(candidate.x, candidate.y, step + 1))
            return true;

    board[x][y] = 0;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    n--;
    m--;

    dfs(m, n, 1);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
            cout << board[i][j] << ' ';
        cout << "\n";
    }

    return 0;
}