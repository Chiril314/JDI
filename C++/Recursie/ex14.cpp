#include <iostream>

using namespace std;

int evenSum(int left, int right){
    if(left == right)
        return left;

    return left + evenSum(left +2, right);
}


int oddSum(int left, int right){
    if(left == right)
        return left;

    return left + oddSum(left + 2, right);
}


int main(){
    int x, y, x1, x2, y1, y2;
    cin >> x >> y;

    if(x % 2 == 0){
        x1 = x;
        x2 = x + 1;                                                                                                  
    } else{
        x1 = x + 1;
        x2 = x;      
    }

    if(y % 2 == 0){
        y1 = y;
        y2 = y - 1;
    } else{
        y1 = y - 1;
        y2 = y;
    } 

    cout << evenSum(x1, y1) << endl << oddSum(x2, y2);

    return 0;
}