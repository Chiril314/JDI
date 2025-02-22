#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];

    vector<bool> used(n, false);
    string prefix = "", suffix = "", middle = "";
    for(int i = 0; i < n; i++){
        if(used[i]) 
            continue; 

        for(int j = i + 1; j < n; j++){
            if(used[j]) 
                continue;

            string rev = s[j];
            reverse(rev.begin(), rev.end());
            if(s[i] == rev){
                prefix += s[i];
                suffix = s[j] + suffix;
                used[i] = used[j] = true;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(!used[i]){
            string rev = s[i];

            reverse(rev.begin(), rev.end());
            if(s[i] == rev){
                middle = s[i];
                break;
            }
        }
    }

    string ans = prefix + middle + suffix;
    cout << ans.size() << endl;
    if(!ans.empty())
        cout << ans;

    return 0;
}