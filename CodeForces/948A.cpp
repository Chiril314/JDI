#include <iostream>

using namespace std;

char **grid;
int r, c, cntW, cntS; 

void initGrid(){
    grid = new char*[r];
    for(int i = 0; i < r; i++)
        grid[i] = new char[c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 'W')
                cntW++;
            else if(grid[i][j] == 'S')
                cntS++;
        }

    return; 
}

bool cSP(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(grid[i][j] == 'S'){
                if(i + 1 < r && grid[i + 1][j] == 'W')
                    return false;
                
                if(i - 1 >= 0 && grid[i - 1][j] == 'W')
                    return false;

                if(j + 1 < c && grid[i][j + 1] == 'W')
                    return false;

                if(j - 1 >= 0 && grid[i][j - 1] == 'W')
                    return false;
            }
        }
    }

    return true;
}

void printGrid(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(grid[i][j] == '.')
                grid[i][j] = 'D';
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> r >> c;
    initGrid();

    if(cntW == 0 || cntS == 0){
        cout << "Yes" << endl;
        printGrid();
        return 0;
    }

    if(!cSP()){
        cout << "No";
        return 0;
    }

    cout << "Yes" << endl;
    printGrid();

    return 0;
}