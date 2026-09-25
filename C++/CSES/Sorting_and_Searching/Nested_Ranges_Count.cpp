#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> bit;

void update(int pos){
    while(pos < bit.size()){
        bit[pos]++;
        pos += pos & -pos;
    }
}

int query(int pos){
    int sum = 0;
    while(pos > 0){
        sum += bit[pos];
        pos -= pos & -pos;
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, seen = 0;
    cin >> n;

    vector<long long> rights;
    vector<pair<pair<long long, long long>, int>> ranges(n);
    for(int i = 0; i < n; i++){
        long long l, r;
        cin >> l >> r;

        ranges[i] = {{l, -r}, i};
        rights.push_back(r);
    }
    
    sort(rights.begin(), rights.end());
    rights.erase(unique(rights.begin(), rights.end()), rights.end());
    
    sort(ranges.begin(), ranges.end());
    vector<int> contains(n), containedBy(n);

    bit.assign(n + 1, 0);
    for(int i = 0; i < n; i++){
        long long r = -ranges[i].first.second;
        int id = ranges[i].second;

        int pos = lower_bound(rights.begin(), rights.end(), r) - rights.begin() + 1;
        containedBy[id] = seen - query(pos - 1);

        update(pos);
        seen++;
    }

    fill(bit.begin(), bit.end(), 0);
    for(int i = n - 1; i >= 0; i--){
        long long r = -ranges[i].first.second;
        int id = ranges[i].second;

        int pos = lower_bound(rights.begin(), rights.end(), r) - rights.begin() + 1;
        contains[id] = query(pos);

        update(pos);
    }

    for(int i = 0; i < n; i++)
        cout << contains[i] << ' ';

    cout << "\n";
    for(int i = 0; i < n; i++)
        cout << containedBy[i] << ' ';

    return 0;
}