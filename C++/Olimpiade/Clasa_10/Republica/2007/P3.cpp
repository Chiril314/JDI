#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> m(n);
    for(int i = 0; i < n; i++)
        cin >> m[i];

    sort(m.begin(), m.end());
    reverse(m.begin(), m.end());
    
    for(int i = 0; i < k; i++)
        cout << m[i] << ' ';

    return 0;
}