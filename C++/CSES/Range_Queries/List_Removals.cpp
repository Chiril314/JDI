#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> a;
vector<pair<int, int>> seg;

int query(int ind, int l, int r, int x){
    if(l == r){
        seg[ind].first = 0;
        return a[l];
    }

    int m = l + (r - l) / 2, ans;
    if(x <= seg[ind].first){
        ans = query(2 * ind + 1, l, m, x);
        seg[ind].first = seg[2 * ind + 1].first + seg[2 * ind + 1].second;
    } else{
        ans = query(2 * ind + 2, m + 1, r, x - seg[ind].first);
        seg[ind].second = seg[2 * ind + 2].first + seg[2 * ind + 2].second;
    }

    return ans;
}

void build(int ind, int l, int r){                                                                                                           
    if(l == r){                     
        seg[ind] = {1, 0};
        return;
    }
                       
    int m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);

    seg[ind].first = seg[2 * ind + 1].first + seg[2 * ind + 1].second;
    seg[ind].second = seg[2 * ind + 2].first + seg[2 * ind + 2].second;

    return;                                                                                                                                                                                                       
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    a.resize(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    seg.resize(4 * n);
    build(0, 0, n - 1);

    int m = n;
    while(m--){
        int x;
        cin >> x;

        cout << query(0, 0, n - 1, x) << ' ';
    }

    return 0;
}