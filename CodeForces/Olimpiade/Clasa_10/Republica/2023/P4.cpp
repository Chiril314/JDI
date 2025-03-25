#include <iostream>

using namespace std;

int main(){
    long long n, p;
    cin >> n >> p;

    long long check = 2, ans = 0;
    while(check <= n){
        if(check % p == 0){
            int temp = check;
            while(temp % p == 0){
                temp /= p;
                ans++;
            }
        }
    
        check++;
    }

    cout << ans;

    return 0;
}