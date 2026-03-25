#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<bool> prime(n, true);
 
    prime[0] = prime[1] = false; 
    for(int i = 2; i * i <= n; i++)
        if(prime[i])
            for(int j = i * i; j <= n; j += i)
                prime[j] = false;

    for(int i = 2; i <= n / 2; i++)
        if(prime[i] && prime[n - i]){
            cout << i << ' ' << (n - i);
            break; 
        }

    return 0;
}