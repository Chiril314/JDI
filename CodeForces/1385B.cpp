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

        vector<bool> vis(n + 50);
        for(int i = 0; i < n + 30; i++)
            vis[i] = false;

        for(int i = 0; i < 2 * n; i++){
            int x;
            cin >> x;

            if(!vis[x])
                cout << x << ' ';
            
            vis[x] = true;
        }

        cout << endl;
    }

    return 0;
}