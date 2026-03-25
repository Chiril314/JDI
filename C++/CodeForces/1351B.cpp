#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int x1 = max(a1, b1);
        int x2 = min(a1, b1);

        int y1 = max(a2, b2);
        int y2 = min(a2, b2);

        if(x1 == y1){
            if(x2 + y2 == x1){
                cout << "YES" << endl;
            } else{
                cout << "NO" << endl;
            }
        } else{
            cout << "NO" << endl;
        }
    }

    return 0;
}