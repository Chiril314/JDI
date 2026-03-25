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

        vector<int> b(n);
        for(int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> c(n);
        for(int i = 0; i < n; i++)
            cin >> c[i];

        int last = a[0];
        cout << last << ' ';
        for(int i = 1; i < n - 1; i++){
            if(a[i] != last){
                last = a[i];
                cout << last << ' ';
                continue;
            }

            last = b[i];
            cout << last << ' ';
        }

        if(a[n - 1] != last && a[n - 1] != a[0])
            cout << a[n - 1] << endl;
        else if(b[n - 1] != last && b[n - 1] != a[0])
            cout << b[n - 1] << endl;
        else if(c[n - 1] != last && c[n - 1] != a[0])
            cout << c[n - 1] << endl;
    }

    return 0;
}