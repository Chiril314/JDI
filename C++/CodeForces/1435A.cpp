#include <iostream>
#include <vector>

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

        for(int i = 0; i < n - 1; i += 2)
            cout << -a[i + 1] << ' ' << a[i] << ' ';
        
        cout << endl;
    }

    return 0;
}