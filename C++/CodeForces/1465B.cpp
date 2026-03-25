#include <iostream>

using namespace std;

bool flag(long long n){
    long long r = n;
    while(n){
        long long c = n % 10;
        n /= 10;

        if(!c)
            continue;
        
        if(r % c)
            return false;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        while(!flag(n)){
            n++;
        }

        cout << n << endl;
    }

    return 0;
}