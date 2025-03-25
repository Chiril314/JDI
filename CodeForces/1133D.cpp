#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<double, bool>> check(n);
    for(int i = 0; i < n; i++){
        cin >> b[i];

        if(a[i] != 0){
            check[i].first = double(b[i]) / a[i];
            check[i].second = true;
        } else{
            check[i].first = 0;
            check[i].second = false;
        }
    }

    sort(check.begin(), check.end());

    int ans = 0, Max = 0;
    for(int i = 1; i < n; i++){
        if(check[i - 1].first == check[i].first && check[i].second && check[i - 1].second)
            Max++;
        else{
            ans = max(ans, Max);
            Max = 0;
        }
    }   

    ans = max(ans, Max);
    if(ans == 0)
        cout << ans;
    else
        cout << ans + 1;

    return 0;
}