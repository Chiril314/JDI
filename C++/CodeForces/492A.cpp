#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int check = 0, ans = 0;
    for(int i = 1; i <= n; i++){
        check += i;
        if(n >= check){
            ans++;
            n -= check;
        } else{
            break;
        }
    }

    cout << ans;

    return 0;
}