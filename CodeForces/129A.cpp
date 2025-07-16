#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, cnt0 = 0, cnt1 = 0, s = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a % 2 == 0)
            cnt0++;
        else
            cnt1++;

        s += a;
    }

    if(s % 2 == 0)
        cout << cnt0;
    else
        cout << cnt1;

    return 0;
}