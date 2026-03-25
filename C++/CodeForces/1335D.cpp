#include <iostream>

using namespace std;

char sudoku[9][9]; 

void createSudoku(){
    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            cin >> sudoku[i][j];
}


void printSudoku(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++)
            cout << sudoku[i][j];
        cout << endl;
    }
}


void swapSudoku(int x, int y){
    if(sudoku[x][y] == '1') 
        sudoku[x][y] = '2';
    else 
        sudoku[x][y] = '1';
}


int main(){
    int t;
    cin >> t;

    while(t--){
        createSudoku();

        swapSudoku(0, 0);
        swapSudoku(3, 1);
        swapSudoku(6, 2);
        swapSudoku(1, 3);
        swapSudoku(4, 4);
        swapSudoku(7, 5);
        swapSudoku(2, 6);
        swapSudoku(5, 7);
        swapSudoku(8, 8);

        printSudoku();
    }

    return 0;
}