#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool flag[101] = {false};

    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 0){
            flag[i] = true;
            cnt++;
        }
    }

    bool ans = false;   
    if(n - cnt == 1){
        ans = true;
    }

    if(ans){
        for(int i = 1; i <= n; i++){
            if(a[i] % 2 != 0){
                cout << i;
                return 0;
            }
        }
    } else{
        for(int i = 1; i <= n; i++){
            if(a[i] % 2 == 0){
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}