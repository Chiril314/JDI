#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), dp(n, 1), st;
    st.reserve(n);

    vector<pair<int, int>> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i].first = a[i];
        b[i].second = i;
    }

    vector<int> leftGreater(n, -1);
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[st.back()] <= a[i])
            st.pop_back();

        if(!st.empty())
            leftGreater[i] = st.back();

        st.push_back(i);
    }

    st.clear();

    vector<int> rightGreater(n, -1);
    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && a[st.back()] <= a[i])
            st.pop_back();

        if(!st.empty())
            rightGreater[i] = st.back();

        st.push_back(i);
    }

    sort(b.begin(), b.end());
    for(int i = 0; i < n - 1; i++){
        int idx = b[i].second;
        if(leftGreater[idx] != -1)
            dp[leftGreater[idx]] = max(dp[leftGreater[idx]], dp[idx] + 1);

        if(rightGreater[idx] != -1)
            dp[rightGreater[idx]] = max(dp[rightGreater[idx]], dp[idx] + 1);
    }

    cout << *max_element(dp.begin(), dp.end());

    return 0;
}