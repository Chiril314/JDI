#include <iostream>

using namespace std;

int f(int n){
    int ans = 0;
    while(n){
        ans += (n % 10);
        n /= 10;
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    cin >> a;

    while(true){
        if(f(a) % 4 == 0){
            cout << a;
            return 0;
        }

        a++;
    }

    return 0;
}