#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<long long, long long>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end()); 

    long long ans = 0, A = 0, left = 0;
    for(int right = 0; right < n; right++){
        A += a[right].second;
        long long B = a[right].first - a[left].first;
        long long check = A - B;
        if(check > ans)
            ans = check;
    }

    cout << ans;

    return 0;
}