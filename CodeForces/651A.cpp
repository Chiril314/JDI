#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a2;
    cin >> a1 >> a2;

    int x = min(a1, a2);
    int y = max(a1, a2);    

    int ans = 0;
    while((x >= 1 && y > 1) || (x > 1 && y >= 1)){
        if(x < y){
            x++;
            y -= 2;
        } else{
            x -= 2;
            y++;
        }

        ans++;
    }

    cout << ans;

    return 0;
}