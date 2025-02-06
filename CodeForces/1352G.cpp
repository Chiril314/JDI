#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n <= 3){
            cout << -1 << endl;
            continue;
        }

        for(int i = 1; i <= n; i++){
            if(i % 4 == 2){
                cout << i << ' ';
            }
        }

        for(int i = n; i >= 1; i--){
            if(i % 4 == 0){
                cout << i << ' ';
            }
        }

        for(int i = 1; i <= n; i++){
            if(i % 4 == 1){
                cout << i << ' ';
            }
        }

        for(int i = n; i >= 1; i--){
            if(i % 4 == 3){
                cout << i << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}