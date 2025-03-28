#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a, a + n);
        
        int ans = 1; 
        for(int i = 0; i < n; i++) 
            if(a[i] <= i + 1) 
                ans = i + 2;

        cout << ans << endl;
    }
    
    return 0;
}