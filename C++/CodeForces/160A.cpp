#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n,  greater<int>());

    int x = 0, cnt = 0;
    for(int i = 0; i < n; i++){
        x += a[i];
        sum -= a[i];
        if(sum >= x){
            cnt++;
        } else{
            break;
        }
    }

    cout << cnt + 1;

    return 0;
}