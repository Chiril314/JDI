#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n], check[n][3];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        check[i][0] = 1001;
        check[i][1] = 1001;
        check[i][2] = 1001;
    }

    check[0][0] = 1;
    if(a[0] == 1 || a[0] == 3)
        check[0][1] = 0;
    if(a[0] == 2 || a[0] == 3)
        check[0][2] = 0;

    for(int i = 1; i < n; i++){
        check[i][0] = 1 + min({check[i - 1][0], check[i - 1][1], check[i - 1][2]});

        if(a[i] == 1 || a[i] == 3)
            check[i][1] = min(check[i - 1][0], check[i - 1][2]);
        if(a[i] == 2 || a[i] == 3)
            check[i][2] = min(check[i - 1][0], check[i - 1][1]);
    }

    int ans = min({check[n - 1][0], check[n - 1][1], check[n - 1][2]});
    cout << ans;

    return 0;
}