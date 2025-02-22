#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    long long ans = 0, check = m / n;
    if(m % n != 0){
        cout << -1;
        return 0;
    }
        
    while(check % 2 == 0){
        check /= 2;
        ans++;
    }

    while(check % 3 == 0){
        check /= 3;
        ans++;
    }

    if(check == 1)
        cout << ans;
    else
        cout << -1;

    return 0;
}