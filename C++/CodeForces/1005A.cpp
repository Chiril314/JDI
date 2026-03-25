#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> ans;
    a[n] = 1;

    for(int i = 0; i < n; i++)
        if(a[i + 1] == 1)
            ans.push_back(a[i]);

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}