#include <iostream>

using namespace std;

int n, m, a, b;
bool check = false;
int **map;

void initmap(){
    map = new int*[n];
    for(int i = 0; i < n; i++){
        map[i] = new int[m];
        for(int j = 0; j < m; j++)
            map[i][j] = 0;
    }
}

void print(){
    cout << "Solution: ";
    for(int i = 0; i < n; i++){
        cout << endl;
        for(int j = 0; j < m; j++)
            cout << map[i][j] << ' ';
    }

    return;
}


void back(int x, int y, int k){
    if(check)
        return;
        
    if(x < 0 || x >= n || y < 0 || y >= m)
        return;

    if(map[x][y])
        return;
    
    map[x][y] = k;
    if(k == n * m){
        check = true;
        print();
        return;
    }

    back(x + 1, y + 2, k + 1);
    back(x + 1, y - 2, k + 1);
    back(x - 1, y + 2, k + 1);
    back(x - 1, y - 2, k + 1);
    back(x + 2, y + 1, k + 1);
    back(x + 2, y - 1, k + 1);
    back(x - 2, y + 1, k + 1);
    back(x - 2, y - 1, k + 1);

    map[x][y] = 0;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> a >> b;

    initmap();
    back(a, b, 1);

    if(!check)
        cout << "No solution";

    return 0;
}