#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(y < x)
        cout << n;
    else{
        sort(a, a + n);

        int cnt = 0;
        for(int i = 0; i < n; i += 2)
			if(a[i] - x <= 0)
                cnt++;

		cout << cnt;
    }

    return 0;
}