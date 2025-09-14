#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        reverse(a.begin(), a.end());
        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';

        cout << endl;
    }

    return 0;
}