#include <iostream>

using namespace std;

int n, m, ans = 0;
char **a;

void dfs(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#')
        return;

    a[i][j] = '#';
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);

    return;
}

void init(){
    a = new char*[n];
    for(int i = 0; i < n; i++){
        a[i] = new char[m];
        for(int j = 0; j < m; j++)  
            cin >> a[i][j];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    init();

    for(int i = 0; i < n; i++)  
        for(int j = 0; j < m; j++)
            if(a[i][j] == '.'){
                dfs(i, j);
                ans++;
            }

    cout << ans;

    return 0;
}