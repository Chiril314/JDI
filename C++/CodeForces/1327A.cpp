#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if(n % 2 == k % 2){
            if(n >= pow(k, 2)){
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