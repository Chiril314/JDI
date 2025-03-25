#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<double, double>> pos1(n);
    vector<pair<double, double>> pos2(n);
    vector<bool> flag(n, false);

    for(int i = 0; i < n; i++)
        cin >> pos1[i].first >> pos1[i].second >> pos2[i].first >> pos2[i].second;

    int ans = n;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if((pos1[i] == pos1[j] || pos1[i] == pos2[j] || pos2[i] == pos1[j] || pos2[i] == pos2[j]) && !flag[j]){
                ans--;
                flag[j] = true;
            }

    cout << ans;

    return 0;
}