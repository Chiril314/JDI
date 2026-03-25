#include <iostream>
#include <vector>
#include <algorithm>

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

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> l(n);
        for(int i = 0; i < n; i++)
            cin >> l[i];

        vector<int> v;
        for(int i = 0; i < n; i++)
            if(!l[i])
                v.push_back(a[i]);

        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++)
            if(!l[i]){
                a[i] = v.back();
                v.pop_back();
            }

        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }

    return 0;
}