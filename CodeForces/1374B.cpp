#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n % 3 != 0){
            if(n != 1)
                cout << -1 << endl;
            else    
                cout << 0 << endl;
        } else{
            int cnt = 0;
            while(n % 6 == 0 || n % 6 == 3){
                cnt++;
                if(n % 6 == 0)
                    n /= 6;
                else 
                    n *= 2;
            }

            if(n == 1)
                cout << cnt << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}