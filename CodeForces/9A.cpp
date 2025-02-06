#include<iostream>
#include <algorithm>

using namespace std;
 
int main(){
    int y, w, check, points;
    cin >> y >> w;

    check = max(w, y);
    points = 7 - check;

    if(points == 1){
        cout << "1/6";
    } else if(points == 2){
        cout << "1/3";
    } else if(points == 3){
        cout << "1/2";
    } else if(points == 4){
        cout << "2/3";
    } else if(points == 5){
        cout << "5/6";
    } else if(points == 6){
        cout << "1/1";
    }
    
    return 0;
}