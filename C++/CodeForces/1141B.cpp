#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1)
            cnt++;
        else{
            ans = max(cnt, ans);
            cnt = 0;
        }
    }

    if(a[n - 1] == 1){
        for(int i = 0; i < n; i++){
            if(a[i] == 1)
                cnt++;
            else{
                ans = max(cnt, ans);
                break;
            }
        }
    }

    cout << ans;

    return 0;
}