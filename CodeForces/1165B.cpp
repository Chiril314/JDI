#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int check = 1, ans = 0;
    for(int i = 0; i < n; i++){
        if(check <= a[i]){
            check++;
            ans++;
        }
    }

    cout << ans;

    return 0;
}