#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t; 

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];

        sort(a.begin(), a.end());

        vector<int> result(n);
        int l = (n - 1) / 2;
        int r = (n - 1) / 2 + 1;
        int k = 0;

        while(l >= 0 || r < n){
            if (l >= 0) result[k++] = a[l--];
            if (r < n) result[k++] = a[r++];
        }

        for (int i = 0; i < n; i++) 
            cout << result[i] << ' ';

        cout << endl;
    }

    return 0;
}