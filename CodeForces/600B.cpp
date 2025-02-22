#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];

    for(int i = 0; i < m; i++)
        cout << (upper_bound(a.begin(), a.end(), b[i]) - a.begin()) << ' ';

    return 0;
}