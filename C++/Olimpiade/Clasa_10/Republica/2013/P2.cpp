#include <iostream>

using namespace std;

int n, m, check, p, q, k;
int **b;

void createGrid(){
    b = new int*[n];
    for(int i = 0; i < n; i++)
        b[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> b[i][j];
}

void dfs(int x, int y){
    if(x < 0 || x >= n || y >= m || y < 0)
        return;
    
    if(b[x][y] != check)           
        return;

    b[x][y] = k;

    dfs(x-1, y);   // Up
    dfs(x, y+1);   // Right
    dfs(x+1, y);   // Down
    dfs(x, y-1);   // Left
}

int main(){
    cin >> n >> m;

    createGrid();

    cin >> p >> q >> k;

    check = b[p - 1][q - 1];

    dfs(p - 1, q - 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << b[i][j] << ' ';
        cout << endl;
    }

    return 0;
}