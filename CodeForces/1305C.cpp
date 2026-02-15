#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(n > m){
        cout << 0;
        return 0;
    }

    long long ans = 1;
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            ans = (ans * abs(a[i] - a[j])) % m;

    cout << ans;

    return 0;
}