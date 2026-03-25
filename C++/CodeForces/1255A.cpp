#include <bits/stdc++.h>

using namespace std;

int main() {
    int K;
    cin >> K;

    while(K--){
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        int cnt = 0;
        

        cnt += diff / 5;
        diff %= 5;


        cnt += diff / 2;
        diff %= 2;


        cnt += diff / 1;
        diff %= 1;

        cout << cnt << endl;
    }

    return 0;
}