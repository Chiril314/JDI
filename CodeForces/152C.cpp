#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<string> names(n);
    for(int i = 0; i < n; ++i)
        cin >> names[i];

    long long ans = 1;
    for(int j = 0; j < m; ++j){
        bool check[26] = {false};
        int cnt = 0;

        for(int i = 0; i < n; i++){
            int index = names[i][j] - 'A';
            if(!check[index]){
                check[index] = true;
                cnt++;
            }
        }

        ans = (ans * cnt) % 1000000007;
    }

    cout << ans;

    return 0;
}