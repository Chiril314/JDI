#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int x, y;
        cin >> x >> y;

        int check = x + 1 - y;
        
        if(check >= 0 && check % 9 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}