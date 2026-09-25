#include <iostream>

using namespace std;

struct Fenwick{
    int n;
    vector<int> bit;

    Fenwick(int size){
        n = size;
        bit.assign(n + 1, 0);
    }

    void add(int idx, int val){
        idx++; 
        while(idx <= n){
            bit[idx] += val;
            idx += idx & -idx;
        }
    }

    int sum(int idx){
        idx++;

        int s = 0;
        while(idx > 0){
            s += bit[idx];
            idx -= idx & -idx;
        }

        return s;
    }

    int rangeSum(int l, int r){
        if(l > r)
            return 0;
        return sum(r) - (l == 0 ? 0 : sum(l - 1));
    }
};

struct Event {
    long long limit;
    int l, r;
    int id;
    int sign;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<pair<long long, int>> a;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        a.push_back({x, i}); // value, 0-indexed position
    }

    vector<Event> events;
    vector<int> ans(q, 0);

    for (int id = 0; id < q; id++) {
        int l, r;
        long long c, d;
        cin >> l >> r >> c >> d;

        // If the input is 1-indexed, uncomment these:
        // l--;
        // r--;

        events.push_back({d, l, r, id, +1});
        events.push_back({c - 1, l, r, id, -1});
    }

    sort(a.begin(), a.end());

    sort(events.begin(), events.end(), [](const Event& x, const Event& y) {
        return x.limit < y.limit;
    });

    Fenwick fw(n);

    int ptr = 0;

    for (auto &e : events) {
        while (ptr < n && a[ptr].first <= e.limit) {
            int pos = a[ptr].second;
            fw.add(pos, 1);
            ptr++;
        }

        ans[e.id] += e.sign * fw.rangeSum(e.l, e.r);
    }

    for (int x : ans) {
        cout << x << '\n';
    }

    return 0;
}