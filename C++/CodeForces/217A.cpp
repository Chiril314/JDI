#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    
    vector<bool> flag(n, false);
    for(int i = 0; i < n; i++){
        if(flag[i])
            continue;
        
        cnt++;

        stack<int> s;
        s.push(i);

        flag[i] = true;
        while(!s.empty()){
            int u = s.top();t
            s.pop();

            for(int j = 0; j < n; j++)
                if(!flag[j] && (a[u].first == a[j].first || a[u].second == a[j].second)){
                    flag[j] = true;
                    s.push(j);
                }
        }
    }

    cout << cnt - 1;

    return 0;
}