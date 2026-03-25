#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, n;
    cin >> x >> n;

    set<int> pos;
    multiset<int> len;

    pos.insert(0);
    pos.insert(x);
    len.insert(x);

    while(n--){
        int p;
        cin >> p;

        auto it = pos.upper_bound(p);
        int r = *it, l = *prev(it);

        len.erase(len.find(r - l));

        len.insert(p - l);
        len.insert(r - p);

        pos.insert(p);

        cout << *len.rbegin() << ' ';
    }

    return 0;
}