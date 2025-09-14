#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int a, x = 0, y = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        x += a == 1;
        y += a == 2;
    }

    if(y){
        y--;
        cout << 2 << ' ';
    }

    if(x){
        x--;
        cout << 1 << ' ';
    }

    while(y--)
        cout << 2 << ' ';
    
    while(x--)
        cout << 1 << ' ';

    return 0;
}