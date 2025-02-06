#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int h, m, check, ans;
        cin >> h >> m;

        check = 60 * h + m;
        cout << 1440 - check << endl;
    }

    return 0;
}