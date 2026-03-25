#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t, n, a, cnt, max, min;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        cnt = 0;
        for(int j = 0; j < 2*n; j++){
            cin >> a;
            cnt += a;
        }
        if(cnt%2 == 0){
            if(cnt > n){
                min = 0;
                max = 2*n - cnt;
            }
            else{
                min = 0;
                max = cnt;
            }
        }
        else{
            if(cnt > n){
                min = 1;
                max = 2*n - cnt;
            }
            else if(cnt == n){
                min = 1;
                max = n;
            }
            else if(cnt < n){
                min = 1;
                max = cnt;
            }
        }
        cout << min << " " << max << endl;
    }
    
 
    return 0;
}