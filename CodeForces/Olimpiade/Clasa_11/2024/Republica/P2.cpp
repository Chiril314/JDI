#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> MaxY(5000001, 0);

    int MaxX = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        x /= 2;
        y /= 2;

        for(int j = 0; j < x; j++)
            MaxY[j] = max(MaxY[j], y);

        MaxX = max(MaxX, x);
    }

    long long ans = 0;
    for(int i = 0; i < MaxX; i++)
        ans += MaxY[i];

    cout << ans * 4;
    
    return 0;
}