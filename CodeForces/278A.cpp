#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int x, y;
    cin >> x >> y;

    x--;
    y--;

    long long x2 = x, ans1 = 0, ans2 = 0;
    while(x != y){
        ans1 += a[x];
        x++;
        if(x == n)
            x = 0;
    }

    x = x2;
    while(x != y){
        x--;
        if(x == -1)
            x = n - 1;
        
        ans2 += a[x];
    }

    cout << min(ans1, ans2);

    return 0;
}