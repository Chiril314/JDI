#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], cnt = 1, max_cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i >= 1 && a[i - 1] <= a[i]){
            cnt++;
        } else if(i >= 1 && a[i - 1] > a[i]){
            if(max_cnt < cnt){
                max_cnt = cnt;
            }
            cnt = 1;
        }
    }

    if(max_cnt < cnt){
        cout << cnt;
    } else{
        cout << max_cnt;
    }

    return 0;
}