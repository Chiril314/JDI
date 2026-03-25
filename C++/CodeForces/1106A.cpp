#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<string> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];
    
    int cnt = 0;
    for(int i = 1; i < n - 1; i++)
        for(int j = 1; j < n - 1; j++)
            if(c[i][j] == 'X' && c[i - 1][j - 1] == 'X' && c[i - 1][j + 1] == 'X' && c[i + 1][j - 1] == 'X' && c[i + 1][j + 1] == 'X')
                cnt++;

    cout << cnt;

    return 0;
}