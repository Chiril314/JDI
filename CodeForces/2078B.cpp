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
        int n, k;
        cin >> n >> k;

        vector<int> ans(n);
        if(n == 2){
            ans[0] = 1;
            ans[1] = 0;
        } else if(k % 2 == 1)
            for(int i = 0; i < n; i++)
                if(i != n - 1)
                    ans[i] = n - 1;
                else
                    ans[i] = n - 2;
        else
            for(int i = 0; i < n; i++)
                if(i != n - 2)
                    ans[i] = n - 2;
                else
                    ans[i] = n - 1;

        for(int i = 0; i < n; i++)
            cout << ans[i] + 1 << ' ';
        cout << endl;
    }

    return 0;
}