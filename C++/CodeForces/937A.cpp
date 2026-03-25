#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        s.insert(x);
    }

    s.erase(0);
    cout << s.size();

    return 0;
}