#include <iostream>

using namespace std;

int** grid;
int n, m;

void createGrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            grid[i][j] = 0;
}


void colourEdge(int check, int left, int right, int light, bool flag = false){
    if(check < 0 || check >= m)
        return;

    for(int i = left; i <= right; i++){
        if(i < 0 || i >= m)
            continue;
        
        if(flag)
            grid[check][i] += light;
        else
            grid[i][check] += light;
    }
}


void bfs(int x, int y, int light, int radius){
    if(light == 0)
        return;

    if(radius == 0)
        grid[y][x] += light;
    else{
        colourEdge(y - radius, x - radius + 1, x + radius - 1, light, true); // top-edge
        colourEdge(x + radius, y - radius, y + radius, light); // right-edge
        colourEdge(y + radius, x - radius + 1, x + radius - 1, light, true); // bottom-edge
        colourEdge(x - radius, y - radius, y + radius, light); // left-edge
    }

    bfs(x, y, light - 1, radius + 1);
}


void printAns(int rLI){
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == rLI){
                cout << j << " " << i << endl;
                cnt++;
            }

    if(cnt == 0)
        cout << "no solution";
}


int main(){
    int lights, lightIntensity, requiredLightIntensity;
    cin >> m >> n >> lights >> lightIntensity >> requiredLightIntensity;

    createGrid();

    for(int i = 0; i < lights; i++){
        int x, y;
        cin >> x >> y;
        bfs(x, y, lightIntensity, 0);
    }

    printAns(requiredLightIntensity);

    return 0;
}