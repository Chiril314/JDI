#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long l = 0, r = 1000000000;
    while(l < r){
        long long m = (l + r) / 2;
        cout << "? " << m << endl;

        string c;
        cin >> c;

        if(c == "YES")
            l = m + 1;
        else
            r = m;
    }

    cout << "! " << l;

    return 0;
}