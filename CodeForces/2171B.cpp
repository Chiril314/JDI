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
        
        if(a[0] == -1 && a[n - 1] == -1){
            a[0] = 0;
            a[n - 1] = 0;
        } else if(a[0] == -1)
            a[0] = a[n - 1];
        else if(a[n - 1] == -1)
            a[n - 1] = a[0];

        cout << abs(a[n - 1] - a[0]) << endl;
        for(int i = 0; i < n; i++)
            if(a[i] == -1)
                cout << 0 << ' ';
            else
                cout << a[i] << ' ';

        cout << endl;
    }

    return 0;
}