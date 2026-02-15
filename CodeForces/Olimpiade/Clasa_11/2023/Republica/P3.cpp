#include <iostream>
#include <queue>

using namespace std;

const int mod = 1000000007;

int n, m, xc, yc, xs, ys;
int ***g;

void init(){
    g = new int**[n];
    for(int i = 0; i < n; i++){
        g[i] = new int*[m];
        for(int j = 0; j < m; j++){
            char a;
            cin >> a;

            g[i][j] = new int[2];
            if(a == '.')
                g[i][j][0] = -1;
            else
                g[i][j][0] = -2;
            
            g[i][j][1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m >> xc >> yc >> xs >> ys;

    xc--;
    yc--;
    xs--;
    ys--;

    init();

    g[xc][yc][0] = 0;
    g[xc][yc][1] = 1;

    queue<pair<int, int>> q;    
    q.push({xc, yc});

    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();

        if(x + 1 < n && g[x + 1][y][0] != -2){
            if(g[x + 1][y][0] == -1){
                g[x + 1][y][0] = g[x][y][0] + 1;
                g[x + 1][y][1] = g[x][y][1];
                q.push({x + 1, y});
            } else if(g[x + 1][y][0] == g[x][y][0] + 1){
                g[x + 1][y][1] = (g[x + 1][y][1] + g[x][y][1]) % mod;
            }
        }

        if(x - 1 >= 0 && g[x - 1][y][0] != -2){
            if(g[x - 1][y][0] == -1){
                g[x - 1][y][0] = g[x][y][0] + 1;
                g[x - 1][y][1] = g[x][y][1];
                q.push({x - 1, y});
            } else if(g[x - 1][y][0] == g[x][y][0] + 1){
                g[x - 1][y][1] = (g[x - 1][y][1] + g[x][y][1]) % mod;
            }
        }

        if(y + 1 < m && g[x][y + 1][0] != -2){
            if(g[x][y + 1][0] == -1){
                g[x][y + 1][0] = g[x][y][0] + 1;
                g[x][y + 1][1] = g[x][y][1];
                q.push({x, y + 1});
            } else if(g[x][y + 1][0] == g[x][y][0] + 1){
                g[x][y + 1][1] = (g[x][y + 1][1] + g[x][y][1]) % mod;
            }
        }

        if(y - 1 >= 0 && g[x][y - 1][0] != -2){
            if(g[x][y - 1][0] == -1){
                g[x][y - 1][0] = g[x][y][0] + 1;
                g[x][y - 1][1] = g[x][y][1];
                q.push({x, y - 1});
            } else if(g[x][y - 1][0] == g[x][y][0] + 1){
                g[x][y - 1][1] = (g[x][y - 1][1] + g[x][y][1]) % mod;
            }
        }
    }

    cout << g[xs][ys][0] + 1 << ' ' << g[xs][ys][1];

    return 0;
}