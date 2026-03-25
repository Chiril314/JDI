#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    cout << n << ' ';
    while(n > 1){
        int smallestFactor = 2;
        while(n % smallestFactor != 0 && smallestFactor * smallestFactor <= n)
            smallestFactor++;

        if(n % smallestFactor != 0)
            smallestFactor = n; 

        n /= smallestFactor;
        cout << n << ' ';
    }

    return 0;
}