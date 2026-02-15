#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x, i = 1, n = 0;
        cin >> x;

        while(n < x){
            n += i;
            i++;
        }

        if(n == x + 1)
            cout << i << endl;
        else
            cout << i - 1 << endl;
    }

    return 0;
}