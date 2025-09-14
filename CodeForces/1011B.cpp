#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, a;
    cin >> n >> m;

    vector<int> cnt(101);
    for(int i = 0; i < m; i++){
        cin >> a;
        cnt[a]++;
    }

    for(int i = 100; i >= 1; i--){
        vector<int> v(cnt);
        int k = 0;
        for(int j = 1; j < 101; j++)
            while(v[j] >= i){
                k++;
                v[j] -= i;
            }

        if(k >= n){
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}