#include <iostream>

using namespace std;

int n, m, k;
int **grid;

void createGrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
}

int squareSum(int posX, int posY){
    int ans = 0;
    for(int i = posX; i < posX + k; i++)
        for(int j = posY; j < posY + k; j++)
            ans += grid[i][j];

    return ans;
}

int main(){
    cin >> n >> m >> k;

    createGrid();

    int ans = 0, posX = 0, posY = 0;

    for(int i = 0; i + k <= n; i++)
        for(int j = 0; j + k <= m; j++){
            int check = squareSum(i, j);

            if(check > ans){
                ans = check;
                posX = i;
                posY = j;
            } else if(check == ans && (j < posY || (j == posY && i < posX))){
                posX = i;
                posY = j;
            }
        }

    cout << ans << endl << posX + 1 << ' ' << posY + 1;

    for(int i = 0; i < n; i++)
        delete[] grid[i];
    delete[] grid;

    return 0;
}