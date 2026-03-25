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

    long long x = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > x + 1){
            cout << x + 1;
            return 0;
        }

        x += a[i];
    }

    cout << x + 1;

    return 0;
}