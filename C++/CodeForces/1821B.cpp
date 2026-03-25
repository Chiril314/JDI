#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];
            
        for(int i = 0; i < n; i++) 
            cin >> b[i];

        int l = 0, r = n - 1;
        while(l < n && a[l] == b[l]) 
            l++;

        while(r >= 0 && a[r] == b[r]) 
            r--;

        while(l > 0 && b[l - 1] <= b[l]) 
            l--;

        while(r < n - 1 && b[r + 1] >= b[r]) 
            r++;

        cout << l + 1 << ' ' << r + 1 << endl;
    }

    return 0;
}