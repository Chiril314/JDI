#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  
    cout.tie(nullptr);

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        multiset<int> a, b;
        for(int i = 0; i < n; i++){
            a.insert(s[i] - 'a');
            b.insert(t[i] - 'a');   
        }

        if(a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}