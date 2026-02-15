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
        int n, cnt0 = 0, cnt1 = 0, e = 0, o = 0;
        cin >> n;

        vector<string> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(s[i].size() % 2 == 1)
                o++;
            else
                e++;
            for(int j = 0; j < s[i].size(); j++){
                cnt1 += (s[i][j] - '0');
                cnt0 += !(s[i][j] - '0');
            }
        }
        
        if(e && !o && (cnt0 % 2 == 1 || cnt1 % 2 == 1)){
            cout << n - 1 << endl;
            continue;
        }

        cout << n << endl;
    }

    return 0;
}