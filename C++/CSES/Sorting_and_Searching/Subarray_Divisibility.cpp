#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> freq(n);
    freq[0] = 1;

    long long s = 0, ans = 0;
    for(long long i = 0; i < n; i++){
        long long value;
        cin >> value;

        s = (s + value) % n;

        if(s < 0)
            s += n;
    
        ans += freq[s];
        freq[s]++;
    }

    cout << ans;

    return 0;
}