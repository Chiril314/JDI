#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<long long, pair<int, int>> seen;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int needed = x - a[i] - a[j];

            auto it = seen.find(needed);
            if(it != seen.end()){
                auto [x, y] = it->second;
                cout << x + 1 << ' ' << y + 1 << ' ' << i + 1 << ' ' << j + 1;
                return 0;
            }
        }
        
        for(int j = 0; j < i; j++){
            long long sum = a[i] + a[j];
            if(!seen.count(sum))
                seen[sum] = {i, j};
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}