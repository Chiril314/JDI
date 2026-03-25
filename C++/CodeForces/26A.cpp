#include <iostream>

using namespace std;

int main(){
    int n, p[3000], k;
    cin >> n;

    int a[n];
    for(int i = 1; i <= n; i++){
        p[i] = i;
    }

       k = 2;
     while(k < n){
        for(int i = k + k; i <= n; i += k){
            p[i] = 0;
        }
        k++;
        while(p[k] == 0){
            k++;
        }
    }

    int ans = 0;
    for(int i = 2; i <= n; i++){
        int check = 0;
        for(int j = 2; j <= i; j++){
            if(p[j] != 0 && i % j == 0){
                check++;
            }
        }

        if(check == 2){
            ans++;
        }
    }

    cout << ans;

    return 0;   
}