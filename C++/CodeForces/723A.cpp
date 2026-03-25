#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x[3];
    for(int i = 0; i < 3; i++){
        cin >> x[i];
    }

    sort(x, x + 3);

    int  ans = 0;
    ans += abs(x[0] - x[1]);
    ans += abs(x[2] - x[1]);

    cout << ans;

    return 0;
}