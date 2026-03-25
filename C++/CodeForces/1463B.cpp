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

        long long x = 0, y = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i % 2 == 1)
                x += a[i];
            else
                y += a[i];
        }

        for(int i = 0; i < n; i++){
            int z = (y > x);
            if((i + z) % 2 == 1)
                cout << a[i] << ' ';
            else
                cout << 1 << ' ';
        }

        cout << endl;
    }

    return 0;
}