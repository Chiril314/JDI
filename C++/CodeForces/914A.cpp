#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool check(int x){
    double sr = sqrt(x);
    return (sr - (int)sr == 0);
}

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
    for(int i = n - 1; i >= 0; i--)
        if(!check(a[i])){
            cout << a[i] << ' ';
            return 0;
        }

    return 0;
}