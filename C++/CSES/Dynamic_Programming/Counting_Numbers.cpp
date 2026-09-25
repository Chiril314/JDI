#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long f(int n){
    long long ans = 1;
    while(n--) 
        ans *= 9LL;

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, y, ans = 0;
    cin >> x >> y;

    if(x == 0){
        ans++;
        x++;
    }

    while(x <= y){
        int k = 0;
        long long p = 1, last = x;

        while(true){
            if(x % p != 0) 
                break;

            long long pref = x / p, end1 = (y + 1) / p - 1, end2 = (pref / 10 + 1) * 10 - 1;
            long long curLast = min(end1, end2);

            if(curLast >= pref){
                last = curLast;
                k = 0;
                long long tmp = p;
                while(tmp > 1){
                    k++;
                    tmp /= 10;
                }
            }

            if(p > (long long)1e18 / 10) 
                break;
            p *= 10;
        }

        long long block = 1;
        for(int i = 0; i < k; i++) 
            block *= 10LL;

        long long prefStart = x / block, prefEnd = last;

        for(long long pref = prefStart; pref <= prefEnd; pref++){
            string s = to_string(pref);
            bool flag = true;
            for(int i = 1; i < (int)s.size(); i++){
                if(s[i] == s[i - 1]){
                    flag = false;
                    break;
                }
            }

            if(flag) 
                ans += f(k);
        }

        x = (prefEnd + 1) * block;
    }
    
    cout << ans;

    return 0;
}