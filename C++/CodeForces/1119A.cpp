#include <iostream>
#include <algorithm>
#include <vector>

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

    int l = -1, f = -1;
    for(int i = 0; i < n; i++){
        if(f == -1 && a[i] != a[n - 1])
            f = i;
        if(a[i] != a[0])
            l = i;
    }

    cout << max(n - f - 1, l);

    return 0;
}