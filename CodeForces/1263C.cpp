#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        set<int> s;
        for(int i = 1; i * i <= n; i++){
            s.insert(n / i);
            s.insert(n / (n / i));
        }

        s.insert(0);

        cout << s.size() << endl;
        for(auto x : s)
            cout << x << ' ';
        cout << endl;
    }   

    return 0;
}