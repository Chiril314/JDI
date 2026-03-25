#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> v1(n);
    vector<pair<int, int>> v2(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        v1[i].first = a;
        v1[i].second = i;
        
        v2[i].first = b;
        v2[i].second = i;
    }

    sort(v1.rbegin(), v1.rend());
    sort(v2.begin(), v2.end());

    int check = max(v2[1].first - v1[0].first, v2[0].first - v1[1].first);
    if(v2[0].second == v1[0].second)
        check = v2[1].first - v1[1].first;

    cout << max(0, check);

    return 0;
}