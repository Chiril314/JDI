#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> a, seg;

int query(int ind, int l, int r, int x){
    if(seg[ind] < x)
        return 0;

    if(l == r){
        seg[ind] -= x;
        return l + 1;
    }

    int m = l + (r - l) / 2, ans;
    if(seg[2 * ind + 1] >= x)
        ans = query(2 * ind + 1, l, m, x);
    else
        ans = query(2 * ind + 2, m + 1, r, x);

    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);

    return ans;
}

void build(int ind, int l, int r){
    if(l == r){
        seg[ind] = a[l];
        return;
    }

    int m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    a.resize(n); 
    for(int i = 0; i < n; i++)
        cin >> a[i];

    seg.resize(4 * n);
    build(0, 0, n - 1);

    while(m--){
        int x;
        cin >> x;

        cout << query(0, 0, n - 1, x) << ' ';
    }

    return 0;
}