#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> cnt;
vector<vector<int>> a;

int dfs(int u){
    int sum = 0;
    for(int i = 0; i < (int)a[u].size(); i++)
        sum += dfs(a[u][i]) + 1;

    cnt[u] = sum;
    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    a.resize(n);
    cnt.resize(n, 0);
    
    for(int i = 1; i < n; i++){
        int p;
        cin >> p;
        
        p--;
        a[p].push_back(i);
    }

    dfs(0);
    for(int i = 0; i < n; i++)
        cout << cnt[i] << ' ';

    return 0;
}