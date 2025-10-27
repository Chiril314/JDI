#include <iostream>

using namespace std;

int n;
bool **map;

void init(){
    map = new bool*[n];
    for(int i = 0; i < n; i++){
        map[i] = new bool[n];
        string s;
        cin >> s;
        for(int j = 0; j < n; j++)
            if(s[j] == '1')
                map[i][j] = true;
            else
                map[i][j] = false;
    }
}

void flipl(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= n)
        return;

    for(int j = x; j < n; j++)
        map[j][y] = !map[j][y];

    flipl(x + 1, y - 1);
    return;   
}

void flipr(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= n)
        return;

    for(int j = x; j < n; j++)
        map[j][y] = !map[j][y];

    flipr(x + 1, y + 1);
    return;   
}

void flip(int x, int y){
    if(x < 0 || x >= n || y < 0 || y >= n)
        return;

    for(int j = x; j < n; j++)
        map[j][y] = !map[j][y];

    flipl(x + 1, y - 1);
    flipr(x + 1, y + 1);

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        cin >> n;
        init();

        long long ans = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(map[i][j]){
                    flip(i, j);
                    ans++;
                }

        cout << ans << endl;

        for(int i = 0; i < n; i++)
            delete[] map[i];
        delete[] map;
    }

    return 0;
}