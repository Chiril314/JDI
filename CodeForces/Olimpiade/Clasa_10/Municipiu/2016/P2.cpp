#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int a[n], check = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        check += a[i];
    }

    sort(a, a + n);
    if(check <= k)
        cout << a[0];
    else{
        if((k / n) >= a[0])
            cout << a[0];
        else
            cout << (k / n);
    }

    return 0;
}