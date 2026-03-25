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

    vector<long long> a;
    a.reserve(n);

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;

        auto it = lower_bound(a.begin(), a.end(), x);
        if(it == a.end())
            a.push_back(x);
        else
            *it = x;
    }

    cout << a.size();

    return 0;
}