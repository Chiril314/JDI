#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if(m > 2 * (n + 1) || n > m + 1){
        cout << -1;
        return 0;
    }

    while(m > 0 || n > 0){
        if(m > n){  
            if(m >= 2){ 
                cout << "11"; 
                m -= 2;
            } else{ 
                cout << '1'; 
                m--;
            }
        }

        if(n > 0){ 
            cout << '0'; 
            n--;
        }

        if(m > 0 && m == n){ 
            cout << '1'; 
            m--;
        }
    }

    return 0;
}