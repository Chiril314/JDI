#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, l = 0, ans = 0;
    cin >> n >> k;

    map<long long, long long> freq;
    vector<long long> a(n);
    for(long long r = 0; r < n; r++){
        cin >> a[r];

        freq[a[r]]++;
        while(freq.size() > k){
            freq[a[l]]--;
            if(freq[a[l]] == 0)
                freq.erase(a[l]);

            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans;

    return 0;
}