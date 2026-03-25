#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> d(n);
    for(int i = 0; i < n; ++i)
        cin >> d[i];

    long long s1 = 0, s3 = 0, ans = 0, l = 0, r = n - 1;
    while(l <= r)
        if(s1 < s3)
            s1 += d[l++];
        else if(s1 > s3)
            s3 += d[r--];
        else{ 
            ans = s1;
            s1 += d[l++];
        }

    if(s1 == s3)
        ans = max(ans, s1);

    cout << ans;

    return 0;
}
