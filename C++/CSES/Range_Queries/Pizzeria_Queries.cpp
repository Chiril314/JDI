#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Node{
    int mnl;
    int mnr;
};

int n, q;
vector<int> a;
vector<Node> seg;

Node merge(Node a, Node b){
    return {min(a.mnl, b.mnl), min(a.mnr, b.mnr)};
}

void update(int ind){
    seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    if(ind == 0)
        return;

    update((ind - 1) / 2);
}

int find(int x){
    int ind = 0, l = 0, r = n - 1;
    while(l != r){
        int m = l + (r - l) / 2;
        if(m >= x){
            ind = 2 * ind + 1;
            r = m;
        } else{
            ind = 2 * ind + 2;
            l = m + 1;
        }
    }

    return ind;
}

Node query(int ind, int cl, int cr, int l, int r){
    if(r < cl || l > cr)
        return {INT_MAX, INT_MAX};

    if(l <= cl && cr <= r)
        return seg[ind];

    int m = cl + (cr - cl) / 2;
    Node left = query(2 * ind + 1, cl, m, l, r);
    Node right = query(2 * ind + 2, m + 1, cr, l, r);

    return merge(left, right);
}

void build(int ind, int l, int r){
    if(l == r){
        seg[ind] = {a[l] - l, a[l] + l};
        return;
    }

    int m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
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
        int type, k;
        cin >> type >> k;

        k--;
        if(type == 1){
            int x;
            cin >> x;

            int ind = find(k);
            
            a[k] = x;
            seg[ind] = {a[k] - k, a[k] + k};

            update((ind - 1) / 2);
        } else{
            Node left = query(0, 0, n - 1, 0, k);
            Node right = query(0, 0, n - 1, k, n - 1);

            cout << min(left.mnl + k, right.mnr - k) << endl;
        }
    }

    return 0;
}