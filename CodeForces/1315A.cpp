#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, m;
        cin >> n >> m;

        long long a[n], ans;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ans += a[i];
        }

        cout << min(m, ans) << endl;
    }

    return 0;
}