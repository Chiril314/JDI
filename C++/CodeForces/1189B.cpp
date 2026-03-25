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

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    bool flag = true;

    if(a[n - 1] >= a[n - 2] + a[n - 3])
        flag = false;
    
    if(flag){
        cout << "YES" << endl;
        cout << a[n - 3] << ' ' << a[n - 1];
        for(int i = n - 2; i >= 0; i--)
            if(i != n - 3)
                cout << ' ' << a[i];
    } else
        cout << "NO";

    return 0;
}