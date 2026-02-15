#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(2 * n);
    for(int i = 0; i < 2 * n; i++)
        cin >> a[i];
    
    sort(a.begin(), a.end());

    int c = 0;
    for(int i = 0; i < 2 * n; i++)
        if(i < n)
            c += a[i];
        else
            c -= a[i];
    
    if(c == 0)
        cout << -1;
    else{
        for(int i = 0; i < 2 * n; i++)
            cout << a[i] << ' ';
    }

    return 0;
}