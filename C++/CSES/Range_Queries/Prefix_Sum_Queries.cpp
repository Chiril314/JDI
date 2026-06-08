#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
    long long sum;
    long long pref;
};

long long n, q;
vector<long long> a;
vector<Node> seg;

Node merge(Node a, Node b){
    return {a.sum + b.sum, max(a.pref, a.sum + b.pref)};
}

void update(long long ind){
    seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    if(ind == 0)
        return;

    update((ind - 1) / 2);
}

long long find(long long x){
    long long ind = 0, l = 0, r = n - 1;
    while(l != r){
        long long m = l + (r - l) / 2;
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

Node query(long long ind, long long cl, long long cr, long long l, long long r){
    if(l > r)
        return {0, 0};

    if(l == cl && r == cr)
        return seg[ind];

    long long m = cl + (cr - cl) / 2;
    Node left = query(2 * ind + 1, cl, m, l, min(r, m));
    Node right = query(2 * ind + 2, m + 1, cr, max(l, m + 1), r);

    return merge(left, right);
}


void build(long long ind, long long l, long long r){
    if(l == r){
        seg[ind] = {a[l], max(a[l], 0LL)};
        return;
    }

    long long m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    seg[ind] = merge(seg[2 * ind + 1], seg[2 * ind + 2]);
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;

    a.resize(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    seg.resize(4 * n);

    build(0, 0, n - 1);
    while(q--){
        long long type;
        cin >> type;

        if(type == 1){
            long long k, u;
            cin >> k >> u;

            k--;

            long long ind = find(k);
            seg[ind] = {u, max(u, 0LL)};

            ind = (ind - 1) / 2;
            update(ind);
        } else{
            long long a, b;
            cin >> a >> b;

            a--;
            b--;

            cout << query(0, 0, n - 1, a, b).pref << endl;
        }
    }



    return 0;
}