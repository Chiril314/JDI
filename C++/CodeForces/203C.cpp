#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, d, a, b;
    cin >> n >> d >> a >> b;

    vector<pair<int, int>> client(n);
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;

        client[i].first = (a * x) + (b * y);
        client[i].second = i + 1;
    }

    sort(client.begin(), client.end());

    vector<int> ans;
    for(int i = 0; i < n; i++)
        if(d >= client[i].first){
            d -= client[i].first;
            ans.push_back(client[i].second);
        }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}