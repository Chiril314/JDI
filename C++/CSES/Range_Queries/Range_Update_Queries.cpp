#include <iostream>
#include <vector>

using namespace std;

int n, q;
vector<long long> a, seg;

void update(int ind, int cl, int cr, int l, int r, long long val){
    if(cr < l || cl > r)
        return;

    if(l <= cl && cr <= r){
        seg[ind] += val;
        return;
    }

    int m = (cl + cr) / 2;
    update(2 * ind + 1, cl, m, l, r, val);
    update(2 * ind + 2, m + 1, cr, l, r, val);
}

long long query(int ind, int cl, int cr, int k){
    if(cl == cr)
        return seg[ind];

    int m = (cl + cr) / 2;
    if(k <= m)
        return seg[ind] + query(2 * ind + 1, cl, m, k);

    return seg[ind] + query(2 * ind + 2, m + 1, cr, k);
}

void build(int ind, int l, int r){
    if(l == r){
        seg[ind] = a[l];
        return;
    }

    int m = (l + r) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    seg[ind] = 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr)

    cin >> n >> q;

    a.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    seg.resize(4 * n);

    build(0, 0, n - 1);
    while(q--){
        int type;
        cin >> type;

        if(type == 1){
            int l, r;
            long long u;
            cin >> l >> r >> u;

            l--;
            r--;

            update(0, 0, n - 1, l, r, u);
        } else {
            int k;
            cin >> k;

            k--;
            cout << query(0, 0, n - 1, k) << '\n';
        }
    }

    return 0;
}