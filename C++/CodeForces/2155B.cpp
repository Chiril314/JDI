#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if(pow(n, 2) - k == 1){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<vector<char>> a(n, vector<char>(n, 'U'));
        if(k == pow(n, 2)){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++)
                    cout << a[i][j];
                cout << endl;
            }
            continue;
        }


        int x = pow(n, 2) - k;
        for(int i = n - 1; i >= 0; i--){
            for(int j = n -  1; j >= 0; j--){
                if(i == n - 1 && j == n - 1){
                    a[i][j] = 'L';
                    x--;
                } else if(i == n - 1 && j != n - 1 && x > 0){
                    a[i][j] = 'R';
                    x--;
                } else if(i != n - 1 && x > 0){
                    a[i][j] = 'D';
                    x--;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                cout << a[i][j];
            cout << endl;
        }
    }

    return 0;
}