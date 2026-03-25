#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long h[n];
    long long currentHeight = 0, ans = 0;
    for(long long i = 0; i < n; i++){
        cin >> h[i];

        if(i == 0){
            currentHeight = h[i];
            ans += h[i] + 1;
        } else{
            ans += abs(currentHeight - h[i]) + 2;
            currentHeight = h[i];
        }
    }

    cout << ans;
    

    return 0;
}