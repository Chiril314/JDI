#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int a, b, n, cnt = 1;
        cin >> a >> b >> n;

        while(a % 2 == 0 || b % 2 == 0)
            if(a % 2 == 0){
                cnt *= 2;
                a /= 2;
            } else{
                cnt *= 2;
                b /= 2;
            }

        if(cnt >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; 
    }

    return 0;
}