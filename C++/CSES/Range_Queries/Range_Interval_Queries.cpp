#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, q;
vector<int> a;
vector<vector<int>> seg;

int query(int ind, int cl, int cr, int l, int r, int a, int b){
    if(cr < l || cl > r)
        return 0;

    if(l <= cl && cr <= r){
        auto lo = lower_bound(seg[ind].begin(), seg[ind].end(), a);
        auto hi = upper_bound(seg[ind].begin(), seg[ind].end(), b);
        return (int)(hi - lo);
    }

    int m = cl + (cr - cl) / 2;
    return query(2 * ind + 1, cl, m, l, r, a, b) + query(2 * ind + 2, m + 1, cr, l, r, a, b);
}

void build(int ind, int l, int r){
    if(l == r){
        seg[ind] = {a[l]};
        return;
    }

    int m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    auto &L = seg[2 * ind + 1];
    auto &R = seg[2 * ind + 2];

    seg[ind].resize(L.size() + R.size());
    merge(L.begin(), L.end(), R.begin(), R.end(), seg[ind].begin());
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    
    a.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    seg.resize(4 * n);
    build(0, 0, n - 1);

    while(q--){
        int l, r, a, b;
        cin >> l >> r >> a >> b;

        l--;
        r--;

        cout << query(0, 0, n - 1, l, r, a, b) << endl;
    }

    return 0;
}