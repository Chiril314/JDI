#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, posX = 1, posY = 1;
    cin >> n;

    vector<pair<int, int>> pos(n);
    for(int i = 0; i < n; i++)
        cin >> pos[i].first >> pos[i].second;

    sort(pos.begin(), pos.end());

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(posX - pos[i].first) + abs(posY - pos[i].second);
        posX = pos[i].first;
        posY = pos[i].second;
    }

    cout << ans;

    return 0;
}