#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int h[n];
    for (int i = 0; i < n; i++)
        cin >> h[i];

    int check1 = 0;
    for(int i = 0; i < k; i++)
        check1 += h[i];

    int check2 = check1;
    int ans = 1; 

    for(int i = 1; i <= n - k; i++){
        check1 = check1 - h[i - 1] + h[i + k - 1]; 

        if(check1 < check2){
            check2 = check1;
            ans = i + 1;
        }
    }

    cout << ans;

    return 0;
}