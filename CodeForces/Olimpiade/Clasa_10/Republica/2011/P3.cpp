#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int n, m;
int grid[100][100];
bool visited[100][100];
vector<string> ans;
string directions[4] = {"SUS", "JOS", "DREAPTA", "STANGA"};

void findPath(int x, int y, vector<string> path){
    if(x < 0 || y < 0 || x >= n || y >= m)
        return;

    if(grid[x][y] == 1 || visited[x][y])
        return;

    if(grid[x][y] == 3){
        if(ans.size() == 0 || path.size() < ans.size())
            ans = path; 
        return;
    }

    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x;
        int ny = y;

        if(i == 0)
            nx--; 
        else if(i == 1)
            nx++; 
        else if(i == 2)
            ny++;
        else if(i == 3)
            ny--; 

        path.push_back(directions[i]);
        findPath(nx, ny, path);      
        path.pop_back();          
    }

    visited[x][y] = false;
}

int main(){
    cin >> n >> m;

    int startX = -1, startY = -1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 2){
                startX = i;
                startY = j;
            }
        }

    vector<string> path;
    findPath(startX, startY, path);

    if(ans.size() > 0){
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << endl;
        
    } else
        cout << 0 << endl;

    return 0;
}
