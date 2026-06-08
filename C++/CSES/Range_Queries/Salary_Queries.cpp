#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 200005;

int n, q;
vector<int> a, bit, vals, typeQuery, xQuery, yQuery;

void add(int idx, int val, int size){
    while(idx <= size){
        bit[idx] += val;
        idx += idx & -idx;
    }
}

int sum(int idx){
    int res = 0;
    while(idx > 0){
        res += bit[idx];
        idx -= idx & -idx;
    }

    return res;
}

int getIndex(int x){
    return lower_bound(vals.begin(), vals.end(), x) - vals.begin() + 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> q;

    a.resize(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        vals.push_back(a[i]);
    }

    typeQuery.resize(q);
    xQuery.resize(q);
    yQuery.resize(q);
    for(int i = 0; i < q; i++){
        char c;
        int x, y;

        cin >> c >> x >> y;

        typeQuery[i] = c;
        xQuery[i] = x;
        yQuery[i] = y;

        if(c == '!')
            vals.push_back(y);
    }

    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    int m = vals.size();
    bit.resize(m + 1);
    for(int i = 1; i <= n; i++)
        add(getIndex(a[i]), 1, m);

    for(int i = 0; i < q; i++){
        if(typeQuery[i] == '!'){
            int k = xQuery[i], newSalary = yQuery[i];
            int oldSalary = a[k];

            add(getIndex(oldSalary), -1, m);
            add(getIndex(newSalary), 1, m);

            a[k] = newSalary;
        } else{
            int left = xQuery[i], right = yQuery[i];

            int r = upper_bound(vals.begin(), vals.end(), right) - vals.begin();
            int l = lower_bound(vals.begin(), vals.end(), left) - vals.begin();

            cout << sum(r) - sum(l) << endl;
        }
    }

    return 0;
}