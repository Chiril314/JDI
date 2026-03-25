#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        bool flag = false;
        for(int i = 0; i < n; i++){
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            if(b == c)
                flag = true;
        }

        if(m % 2 == 1)
            flag = false;

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}