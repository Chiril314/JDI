#include <iostream>

using namespace std;

int whiteValue(char s){
    if(s == 'Q'){
        return 9;
    } else if(s == 'R'){
        return 5;
    } else if(s == 'B' || s == 'N'){
        return 3;
    } else if(s == 'P'){
        return 1;
    }
    
    return 0;
}


int blackValue(char s){
    if(s == 'q'){
        return 9;
    } else if(s == 'r'){
        return 5;
    } else if(s == 'b' || s == 'n'){
        return 3;
    } else if(s == 'p'){
        return 1;
    }

    return 0;
}


int main(){
    char board[64]; 
    for(int i = 0; i < 64; i++){
        cin >> board[i];
    }

    int whitePieces = 0, blackPieces = 0;
    for(int i = 0; i < 64; i++){
        whitePieces += whiteValue(board[i]);
        blackPieces += blackValue(board[i]);
    }

    if(whitePieces > blackPieces){
        cout << "White";
    } else if(whitePieces == blackPieces){
        cout << "Draw";
    } else if(whitePieces < blackPieces){
        cout << "Black";
    }

    return 0;
}