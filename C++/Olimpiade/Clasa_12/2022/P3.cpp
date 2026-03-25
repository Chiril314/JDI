#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int **c;

queue<pair<pair<int, int>, int>> q;

void init(){
    c = new int*[n];
    for(int i = 0; i < n; i++){
        c[i] = new int[m];
        for(int j = 0; j < m; j++){
            char a;
            cin >> a;

            if(a == 'b')
                c[i][j] = -2;
            else if(a == 's')
                c[i][j] = -1;
            else if(a == 'p'){
                c[i][j] = 0;
                q.push({{i, j}, 0});
            }
        }
    }
}

void sp(){
    int s = q.size();
    while(s--){
        int x = q.front().first.first, y = q.front().first.second, l = q.front().second;
        q.pop();

        if(x - 1 >= 0 && c[x - 1][y] == -1)
            q.push({{x - 1, y}, l + 1});
        if(x + 1 < n && c[x + 1][y] == -1)
            q.push({{x + 1, y}, l + 1});
        if(y - 1 >= 0 && c[x][y - 1] == -1)
            q.push({{x, y - 1}, l + 1});
        if(y + 1 < m && c[x][y + 1] == -1)
            q.push({{x, y + 1}, l + 1});

        if(c[x][y] == -1)
            c[x][y] = l;
    }
}

void f(){
    int cnt = 2;
    while(!q.empty()){
        int x = q.front().first.first, y = q.front().first.second, l = q.front().second;
        q.pop();

        if(x - 1 >= 0 && c[x - 1][y] == -1)
            q.push({{x - 1, y}, l + 1});
        if(x + 1 < n && c[x + 1][y] == -1)
            q.push({{x + 1, y}, l + 1});
        if(y - 1 >= 0 && c[x][y - 1] == -1)
            q.push({{x, y - 1}, l + 1});
        if(y + 1 < m && c[x][y + 1] == -1)
            q.push({{x, y + 1}, l + 1});

        if(c[x][y] == -1)
            c[x][y] = l;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    init();
    sp();
    f();

    int mx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << c[i][j] << ' ';
            mx = max(mx, c[i][j]);
        }
        cout << endl;
    }
        
    cout << endl << mx;

    return 0;
}