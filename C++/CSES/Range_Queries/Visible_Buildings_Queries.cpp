#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> next_greater(n, -1);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && a[st.top()] <= a[i])
            st.pop();
    
        if(!st.empty())
            next_greater[i] = st.top();

        st.push(i);
    }

    int m = 1;
    while((1 << m) <= n)
        m++;

    vector<vector<int>> dp(n, vector<int> (m, -1));
    for(int i = 0; i < n; i++)
        dp[i][0] = next_greater[i];

    for(int j = 1; j < m; j++)
        for(int i = 0; i < n; i++)
            if(dp[i][j - 1] != -1)
                dp[i][j] = dp[dp[i][j - 1]][j - 1];

    while(q--){
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        int cnt = 1;
        for(int j = m - 1; j >= 0; j--)
            if(dp[a][j] != -1 && dp[a][j] <= b){
                cnt += (1 << j);
                a = dp[a][j];
            }

        cout << cnt << endl;
    }

    return 0;
}