#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v, k;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        for(int j = 0; j < m; j++)
            if(s[j] == '*'){
                v.push_back(i);
                k.push_back(j);
            }
    }

    sort(v.begin(), v.end());
    sort(k.begin(), k.end());

    if(v[0] == v[1])
        cout << v[2] + 1 << ' ';
    else 
        cout << v[0] + 1 << ' ';

    if(k[0] == k[1])
        cout << k[2] + 1;
    else
        cout << k[0] + 1;

    return 0;
}