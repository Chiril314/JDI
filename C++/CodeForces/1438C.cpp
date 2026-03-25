#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                if((i + j) % 2 == 1){
                    if(a[i][j] % 2 == 1)
                        a[i][j]++;
                } else{
                    if(a[i][j] % 2 == 0)
                        a[i][j]++;
                }
            }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++)
                cout << a[i][j] << ' ';
            cout << endl;
        }
    }

    return 0;
}