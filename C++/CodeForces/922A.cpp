#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y; 
    cin >> x >> y;

    int a = y - 1, n = x - a;
    if(x && !y){
        cout << "No";
        return 0;
    }

    if(x > 1 && y == 1){
        cout << "No";
        return 0;
    }

    if(n & 1 || n < 0)
        cout << "No";
    else    
        cout << "Yes";

    return 0;
}