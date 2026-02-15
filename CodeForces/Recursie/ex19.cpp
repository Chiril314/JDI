#include <iostream>
#include <set>
#include <vector>

using namespace std;

int **grid, n, m;
vector<pair<int, int>> check, ans;

void initgrid(){
    grid = new int*[n];
    for(int i = 0; i < n; i++)
        grid[i] = new int[m];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
}

void f(int d){
    if(check.empty())
        return;
    
    set<pair<int, int>> s;
    vector<pair<int, int>> temp = check;
    for(int i = 0; i < check.size(); i++)
        s.insert({check[i].first, check[i].second});
    
    check.clear();
    for(auto p : s)
        grid[p.first][p.second] = d;

    for(auto p : s){
        int a = p.first, b = p.second;
        if(a + 1 < n && grid[a + 1][b] == 0)
            check.push_back({a + 1, b});
        if(a >= 1 && grid[a - 1][b] == 0)
            check.push_back({a - 1, b});
        if(b + 1 < m && grid[a][b + 1] == 0)
            check.push_back({a, b + 1});
        if(b >= 1 && grid[a][b - 1] == 0)
            check.push_back({a, b - 1});
    }

    if(check.empty())
        ans = temp;

    f(d + 1);
}

void show(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << grid[i][j] << ' ';
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> n >> m >> N;
    initgrid();

    int a, b;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        if(a + 1 < n && grid[a + 1][b] == 0)
            check.push_back({a + 1, b});
        if(a >= 1 && grid[a - 1][b] == 0)
            check.push_back({a - 1, b});
        if(b + 1 < m && grid[a][b + 1] == 0)
            check.push_back({a, b + 1});
        if(b >= 1 && grid[a][b - 1] == 0)
            check.push_back({a, b - 1});
        grid[a][b] = 1;
    }

    f(2);

    cout << grid[ans[0].first][ans[0].second] - 1 <<  endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << ' ' << ans[i].second << endl;

    return 0;
}