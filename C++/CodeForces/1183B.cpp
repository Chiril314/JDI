#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        int x = a[0];
        int y = a[n - 1];
        if(y - x > 2 * k)
            cout << -1 << endl;
        else
            cout << x + k << endl;
    }

    return 0;
}