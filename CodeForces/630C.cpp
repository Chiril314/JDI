#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    long long ans = 2;
    for(int i = 1; i <= n; i++)
        ans *= 2; 
    
    cout << (ans - 2);

    return 0;
}