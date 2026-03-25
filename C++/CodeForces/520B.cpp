#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int ans = 0;
    if(n >= m){
        cout << n - m;
    } else{
        while(n < m){
            if(m % 2 == 0){
                m /= 2;
                ans++;
            } else{
                m++;
                ans++;
            }
        }

        cout << abs(ans + n - m);
    }

    return 0;
}