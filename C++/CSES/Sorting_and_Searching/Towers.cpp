#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> towers;
    while(n--){
        int x;
        cin >> x;

        auto it = towers.upper_bound(x);
        if(it != towers.end())
            towers.erase(it);

        towers.insert(x);
    }

    cout << towers.size();

    return 0;
}