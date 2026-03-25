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

    vector<int> b, ans;
    while(true){
        vector<bool> used(1001, false);

        sort(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++){
            if(!used[a[i]]){
                ans.push_back(a[i]);
                used[a[i]] = true;
            } else{
                b.push_back(a[i]);
            }
        }

        a = b;
        b.clear();
        if(a.empty())
            break;
    }

    int x = 0;
    for(int i = 0; i < ans.size() - 1; i++)
        if(ans[i] < ans[i + 1])
            x++;

    cout << x;


    return 0;
}