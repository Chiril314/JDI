#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int na, nb, k, m;
    cin >> na >> nb >> k >> m;

    vector<int> a(na), b(nb);
    for(int i = 0; i < na; i++) 
        cin >> a[i];

    for(int i = 0; i < nb; i++) 
        cin >> b[i];

    reverse(b.begin(), b.end());
    if(b[m - 1] > a[k - 1])
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}