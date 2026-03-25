#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long k;
    cin >> k;

    if(k % 2 == 1)
        cout << 1;
    else{
        int ans = 1;
        while(k % 2 != 1){
            ans++;
            k /= 2;
        }

        cout << ans;
    }

    return 0;
}