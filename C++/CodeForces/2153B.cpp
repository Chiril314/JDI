#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        bool flag = true;
        for(int i = 0; i < 31; i++){
            int xi = (x >> i) & 1, yi = (y >> i) & 1, zi = (z >> i) & 1;
            int sum = xi + yi + zi;
            if(sum == 2){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}