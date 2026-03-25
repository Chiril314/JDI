#include <iostream>
#include <cmath>

using namespace std;

int sideSize(int n){
    int s = sqrt(n);

    for(int i = s; i > 0; i--)
        if(n % i == 0)
            return i;

    return 0;
}

int main(){
    int n;
    cin >> n;

    int s1 = sideSize(n);
    int s2 = n / s1;

    cout << (2 * s1) + (2 * s2);

    return 0;
}