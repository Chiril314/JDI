#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define st first
#define nd second

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, n, mx = 0;
    cin >> k >> n;

    vector<int> h(n);
    for(int i = 0, l = -1, r = -1; i < n; i++){
        cin >> h[i];
        if(h[i] > 1 && l == -1){
            l = i;
            r = i;
        } else if(h[i] > 1)
            r++;
        else{
            if(l != -1)
                mx = max(mx, r - l + 1);
            l = -1;
            r = -1;
        }

        if(i == n - 1 && l != -1)
            mx = max(mx, r - l + 1);
    }


    vector<vector<pair<int, pair<int, int>>>> nx(mx);
    for(int i = 0, l = -1, r = -1; i < n; i++){
        if(h[i] > 1 && l == -1){
            l = i;
            r = i;
        } else if(h[i] > 1)
            r++;
        else{
            if(l != -1)
                nx[r - l].push_back({2, {l, r}});
            l = -1;
            r = -1;
        }

        if(i == n - 1 && l != -1)
            nx[r - l].push_back({2, {l, r}});
    }

    for(int i = 0; i < mx; i++)
        for(int j = 0; j < nx[i].size(); j++)
            cout << j + 1 << " - " << nx[i][j].st << ", " << nx[i][j].nd.st << ", " << nx[i][j].nd.nd << endl;

    return 0;
}