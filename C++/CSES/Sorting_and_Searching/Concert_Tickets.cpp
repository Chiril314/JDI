#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;

        auto it = a.upper_bound(x);
        if(it == a.begin()){
            cout << -1 << endl;
        } else{
            it--;
            cout << *it << endl;
            a.erase(it);
        }
    }

    return 0;
}