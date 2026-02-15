#include <iostream>

using namespace std;

int f(int n){
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return i;
    
    return n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    while(f(b) <= a && b > a)
        b--;
    
    if(b <= a)
        cout << -1;
    else
        cout << b;

    return 0;
}