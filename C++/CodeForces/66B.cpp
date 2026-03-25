#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = i - 1; j >= 0; j--)
            if(a[j] <= a[j + 1])
                cnt++;
            else
                break;

        for(int j = i + 1; j < n; j++)
            if(a[j] <= a[j - 1])
                cnt++;
            else
                break;

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}