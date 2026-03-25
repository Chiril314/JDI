#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    if(k == n){
        cout << -1;
        return 0;
    }

    vector<int> p(n + 1), pos(n + 1);
    for(int i = 1; i < n; i++)
        p[i] = i + 1;

    p[n] = 1;
    for(int i = 1; i <= n; i++)
        pos[p[i]] = i;

    for(int i = 2; i <= k + 1; i++){
        int c = pos[i];
        if(c != i){
            swap(p[i], p[c]);
            pos[p[i]] = i;
            pos[p[c]] = c;
        }
    }

    for(int i = 1; i <= n; i++)
        cout << p[i] << ' ';

    return 0;
}