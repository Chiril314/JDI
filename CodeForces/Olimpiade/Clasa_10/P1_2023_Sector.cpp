#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int l[n], ans = n, cnt = 1;
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }

    sort(l, l + n);

    for(int i = 1; i < n; i++){
        if(l[i - 1] == l[i]){
            cnt++;
            ans--;
        }
    }

    cout << cnt << ' ' << ans;

    return 0;
}