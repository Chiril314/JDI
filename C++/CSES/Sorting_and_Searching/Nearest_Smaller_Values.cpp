#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    stack<pair<int, int>> st;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        while(!st.empty() && st.top().first >= x)
            st.pop();

        if(st.empty())
            cout << 0 << ' ';
        else
            cout << st.top().second << ' ';
    
        st.push({x, i});
    }

    return 0;
}