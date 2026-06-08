#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> up(n, vector<int>(31));
    for(int i = 0; i < n; i++){
        cin >> up[i][0];
        up[i][0]--;
    }

    for(int i = 1; i < 31; i++)
        for(int j = 0; j < n; j++)
            up[j][i] = up[up[j][i - 1]][i - 1];

    while(q--){
        int x, k;
        cin >> x >> k;

        x--;
        for(int i = 0; i < 31; i++)
            if(k & (1 << i))
                x = up[x][i];

        cout << x + 1 << "\n";
    }

    return 0;
}