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

        int ans = 1, lvl = 1, cur = 0;
        for(int i = 1; i < n; i++){
            if(a[i] < a[i - 1]){
                lvl--;
                if(!lvl){
                    ans++;
                    lvl = cur;
                    cur = 0;
                }
            }

            cur++;
        }

        cout << ans << endl;
    }

    return 0;
}