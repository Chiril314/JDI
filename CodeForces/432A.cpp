#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int y[n];
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }

    sort(y, y + n);

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(5 - y[i] >= k){
            ans++;
        }
    }

    cout << ans / 3;

    return 0;
}