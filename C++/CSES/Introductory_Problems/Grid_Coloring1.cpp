#include <iostream>
#include <vector>

using namespace std;

char f(vector<bool> flag){
    if(!flag[0])
        return 'A';
    if(!flag[1])
        return 'B';
    if(!flag[2])
        return 'C';
    if(!flag[3])
        return 'D';
    return 'Z';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> s(n), ans;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    ans = s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vector<bool> flag(4);
            if(i > 0)
                flag[ans[i - 1][j] - 'A'] = true;
            if(j > 0)
                flag[ans[i][j - 1] - 'A'] = true;
            flag[s[i][j] - 'A'] = true;

            ans[i][j] = f(flag);
            if(ans[i][j] == 'Z'){
                cout << "IMPOSSIBLE";
                return 0;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << endl;

    return 0;
}