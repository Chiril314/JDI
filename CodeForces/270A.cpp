#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a;
        cin >> a;

        int angle = 180 - a;

        if(360 % angle == 0){
            int n = 360 / angle;
            if(n >= 3){
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }

    return 0;
}