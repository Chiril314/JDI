#include <iostream>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] - d <= a[j] && a[i] + d >= a[j]){
                ans += 2;
            }
        }
    }

    cout << ans;

    return 0;
}