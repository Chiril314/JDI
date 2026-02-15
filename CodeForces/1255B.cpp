#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        long long sum = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;

            sum += (2 * a);
        }

        if(n == 2)
            cout << -1 << endl;
        else if(n == m){
            cout << sum << endl;
            for(int i = 0; i < n - 1; i++)
                cout << i + 1 << ' ' << i + 2 << endl;
            
            cout << n << ' ' << 1 << endl;
        } else
            cout << -1 << endl;
    }    

    return 0;
}