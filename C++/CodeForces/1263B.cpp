#include <iostream>
#include <set>
#include <vector>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, ans = 0;
        cin >> n;

        vector<string> s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];

        map<string, int> f;
        for(int i = 0; i < n; i++)
            f[s[i]]++;

        set<string> used;
        for(int i = 0; i < n; i++){
            f[s[i]]--;
            if(used.find(s[i]) == used.end())
                used.insert(s[i]);
            else{
                ans++;

                bool flag = false;
                for(int p = 3; p >= 0 && !flag; p--)
                    for(char a = '0'; a <= '9'; a++){
                        if(a == s[i][p])
                            continue;

                        string x = s[i];
                        x[p] = a;
                        
                        if(used.find(x) == used.end() && f[x] == 0){
                            used.insert(x);
                            s[i] = x;
                            flag = true;
                            break;
                        }
                    }
            }
        }

        cout << ans << endl;
        for(int i = 0; i < n; i++)
            cout << s[i] << endl;
    }


    return 0;
}