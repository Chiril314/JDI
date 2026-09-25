#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    long long x, a, b, c, ans = 0;
    cin >> x >> a >> b >> c;

    deque<pair<long long, int>> dq;
    for(int i = 0; i < n; i++){
        long long value = x;
        while(!dq.empty() && dq.front().second <= i - k)
            dq.pop_front();

        while(!dq.empty() && dq.back().first >= value)
            dq.pop_back();

        dq.push_back({value, i});
        if(i >= k - 1)
            ans ^= dq.front().first;

        x = (a * x + b) % c;
    }

    cout << ans;

    return 0;
}