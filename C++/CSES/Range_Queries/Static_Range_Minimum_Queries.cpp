#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> 

using namespace std;

int n, q;
vector<int> a, seg;

int query(int ind, int cl, int cr, int l, int r){
    if(cl >= l && cr <= r)
        return seg[ind];

    if(cr < l || cl > r)
        return INT_MAX;

    int m = (cl + cr) / 2;
    int left = query(2 * ind + 1, cl, m, l, r);
    int right = query(2 * ind + 2, m + 1, cr, l, r);

    return min(left, right);
}

void build(int ind, int l, int r){
    if(l == r){
        seg[ind] = a[l];
        return;
    }

    int m = (l + r) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> q;

    a.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    seg.resize(4 * n);

    build(0, 0, n - 1);
    while(q--){
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        cout << query(0, 0, n - 1, l, r) << '\n';
    }

    return 0;
}