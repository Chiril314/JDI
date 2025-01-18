#include <iostream>

using namespace std;

int main(){
    int n, a;
    cin >> n;

    for(int i = 2; i < n; i++){
        a = i;
        if(n % a == 0){
            cout << a << n / i;
            break;
        }
    }

    return 0;
}