#include <iostream>

using namespace std;

int pw(long long n, long long pow, long long m){
    if(pow == 0)
        return 1;
    
    if(pow % 2 == 0){
        long long x = pw(n, pow / 2, m);
        return (x * x) % m;
    } else
        return (pw(n, pow - 1, m) * n) % m;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans = 0;
    cin >> n;

    for(long long i = 1; i < n; i++){
        bool flag = false;
        for(long long x = 1; x <= n - 2; x++)
            if(pw(i, x, n) == 1)
                flag = true;

        if(flag || (pw(i, n - 1, n) - 1) % n != 0)
            continue;
        
        ans++;
    }

    cout << ans;

    return 0;   
}