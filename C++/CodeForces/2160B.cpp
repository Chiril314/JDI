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

        vector<long long> b(n + 1), ans(n + 1);
        for(int i = 1; i <= n; i++)
            cin >> b[i];

        long long add = 1;
        for(int i = 1; i <= n; i++){
            int dif = b[i] - b[i - 1];
            
            if(i == dif)
                ans[i] = add++;
            else
                ans[i] = ans[i - dif];
        }

        for(int i = 1; i <= n; i++)
            cout << ans[i] << ' ';
        cout << endl;
    }

    return 0;
}