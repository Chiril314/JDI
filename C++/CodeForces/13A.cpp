#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}


int main(){
    int A;
    cin >> A;

    int n, ans = 0;
    for(int i = 2; i <= A - 1; i++){
        n = A;
        while(n > 0){
            ans += n % i;
            n /= i;
        }
    }

    int temp2 = A - 2;
    int divisor = gcd(ans, temp2);

    cout << ans / divisor << "/" << (A - 2) / divisor;

    return 0;
}