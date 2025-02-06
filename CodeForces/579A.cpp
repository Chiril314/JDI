#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    int check = 0, ans = 0;
    while(x != 0){
        if(check == 0){
            check++;
        }
        
        if(check * 2 > x){
            x -= check;
            check = 0;
            ans++;
        } else{
            check *= 2;
        }
    }

    cout << ans;

    return 0;
}