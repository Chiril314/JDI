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
    int check = a[n - 1] - a[0];
    if(check % 2 == 0)  
        check /= 2;
    
    if(check == 0){
        cout << 0;
        return 0;
    }

    int b = a[0] % check, cnt = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % check == b)
            cnt++;

    if(cnt == n)
        cout << check;
    else
        cout << -1;

    return 0;
}