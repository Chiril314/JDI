#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        long long x = 1, cur = 0, r = 0;
        while(true){
            long long num = ((x + 1) * x) / 2;
            cur += num;
            if(cur > n)
                break;
            
            x = x * 2 + 1;
            r++;
        }

        cout << r << endl;
    }

    return 0;
}