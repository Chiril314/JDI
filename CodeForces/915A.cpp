#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int mx = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(k % a == 0)
            mx = max(mx, a);
    }
        
    cout << k / mx;

    return 0;
}