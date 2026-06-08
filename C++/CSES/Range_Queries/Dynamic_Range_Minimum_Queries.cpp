#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, q;
vector<int> a, seg;

void update(int ind){
    if(ind < 0)
        return;

    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    if(ind == 0)
        return;

    if(ind % 2 == 0)
        update((ind - 2) / 2);
    else
        update((ind - 1) / 2);

    return;    
}

int find(int c){
    int l = 0, r = n - 1, ind = 0;
    while(l != r){
        int m = (l + r) / 2;
        if(c <= m){
            r = m;
            ind = 2 * ind + 1;
        } else{
            l = m + 1;
            ind = 2 * ind + 2;
        }
    } 

    return ind;
}

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

    return;
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
        int type;
        cin >> type;

        if(type == 1){
            int k, u;
            cin >> k >> u;

            k--;
            int ind = find(k);

            seg[ind] = u;
            if(ind % 2 == 0)
                ind = (ind - 2) / 2;
            else
                ind = (ind - 1) / 2;

            update(ind);
        } else{
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            cout << query(0, 0, n - 1, l, r) << endl;
        }
    }


    return 0;
}