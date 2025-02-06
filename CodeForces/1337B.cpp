#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, n, m;
        cin >> x >> n >> m;

        while(n > 0){            
            if(x <= 20){
                break;
            }
            x = int(x / 2) + 10;
            n--;
        }

        if(x <= 0){
            cout << "YES" << endl;
        } else{
            while(m > 0){
                x -= 10;
                m--;
                if(x <= 0){
                    break;
                }
            }

            if(x <= 0){
                cout << "YES" << endl;
            } else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}