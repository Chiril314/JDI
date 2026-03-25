#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int used = a, ans = a;

    while(used >= b){
        used -= b;
        ans++;
        used++;
    }
    
    cout << ans;

    return 0;
}