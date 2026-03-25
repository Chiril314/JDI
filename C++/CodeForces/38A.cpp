#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b;
    cin >> n;

    vector<int> d(n);
    for(int i = 0; i < n - 1; i++)
        cin >> d[i];

    cin >> a >> b;
     
    a--;
    b--;

    int ans = 0;
    for(int i = a; i < b; i++)
        if(ans += d[i]);
    
    cout << ans;

    return 0;
}