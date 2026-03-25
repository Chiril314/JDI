#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> card(n);
    for(int i = 0; i < n; i++)
        cin >> card[i].first >> card[i].second;

    sort(card.rbegin(), card.rend());

    int cnt = 1, ans = 0;
    for(int i = 0; i < card.size(); i++)
        if(card[i].second > 0){
            ans += card[i].first;
            cnt += card[i].second - 1;
            card.erase(card.begin() + i);
            i--;
        }

    for(int i = 0; i < card.size(); i++){
        if(cnt == 0)
            break;
        ans += card[i].first;
        cnt += card[i].second - 1;
    }
    
    cout << ans; 

    return 0;
}