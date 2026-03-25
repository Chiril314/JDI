#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> first, last;

    first.push_back(0);
    last.push_back(a[0]);
    for(long long i = 1; i < n / 2; i++){
        long long k = min(last.back(), a[i]);
        long long l = max(first.back(), a[i] - k);

        first.push_back(l);
        last.push_back(a[i] - l);
    }

    reverse(last.begin(), last.end());
    for(int i = 0; i < first.size(); i++)
        cout << first[i] << ' ';
    
    for(int i = 0; i < last.size(); i++)
        cout << last[i] << ' ';

    return 0;
}