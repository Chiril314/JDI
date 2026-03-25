#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, pw = 1;
        cin >> n;

        while(pw - 1 < n)
            pw *= 2;

        if(n == pw - 1){
            bool flag = false;
            for(int i = 2; i * i <= n; i++)
                if(n % i == 0){
                    cout << n / i << endl;
                    flag = true;
                    break;
                }

            if(!flag)
                cout << 1 << endl;

            continue;
        } else
            cout << pw - 1 << endl;
    }

    return 0;
}