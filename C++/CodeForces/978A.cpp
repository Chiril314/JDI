#include <iostream>
#include <vector>
#include <algorithm>

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

    vector<bool> used(1000, false);
    vector<int> check;
    for(int i = n - 1; i >= 0; i--)
        if(!used[a[i] - 1]){
            used[a[i] - 1] = true;
            check.push_back(i);
        }

    vector<int> ans;
    sort(check.begin(), check.end());

    int x = 0;
    for(int i = 0; i < n; i++){
        if(x == check.size())
            break;
        
        if(i == check[x]){
            ans.push_back(a[i]);
            x++;
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) 
        cout << ans[i] << ' ';

    return 0;
}