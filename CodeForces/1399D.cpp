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
        int n, ans = 1;
        string s;

        cin >> n >> s;
        vector<int> x, y, a(n);
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                if(x.empty()){
                    y.push_back(ans);
                    ans++;
                    a[i] = y.back();
                } else{
                    a[i] = x.back();
                    y.push_back(x.back());
                    x.pop_back();
                }
            } else{
                if(y.empty()){
                    x.push_back(ans);
                    ans++;
                    a[i] = x.back();
                } else{
                    a[i] = y.back();
                    x.push_back(y.back());
                    y.pop_back();
                }
            }
        }

        ans--;
        cout << ans << endl;
        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';

        cout << endl;
    }

    return 0;
}