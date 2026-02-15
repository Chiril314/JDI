#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    cout << (m - 1) * m / 2 << endl;
    if(k == 0)
        for(int i = 0; i < m; i++)
            for(int j = i + 1; j < m; j++)
                cout << i + 1 << ' ' << j + 1 << endl;
    else
        for(int i = 0; i < m; i++)
            for(int j = i + 1; j < m; j++)
                cout << j + 1 << ' ' << i + 1 << endl;

    return 0;
}