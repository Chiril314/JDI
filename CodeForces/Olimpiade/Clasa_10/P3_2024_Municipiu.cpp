#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int c[n], p[n];
    for(int i = 0; i < n; i++){
        cin >> c[i] >> p[i];
    }

    int check = 5000;
    for(int i = 0; i < n; i++){
        if(c[i] == x){
            continue;
        } else{
            check = min(check, p[i]);
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(c[i] != x){
            continue;
        } else{
            if(p[i] < check){
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}