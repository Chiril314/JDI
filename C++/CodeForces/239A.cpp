#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int y, k, n;
    cin >> y >> k >> n;

    bool flag = false;
    for(int i = k; i <= n; i += k)
        if(i > y){
            cout << i - y << ' ';
            flag = true;
        }

    if(!flag)
        cout << -1;

    return 0;
}