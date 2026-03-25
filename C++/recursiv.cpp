#include <iostream>

using namespace std;

int factorial(int x) {
    int ans = 1;
    for(int i = 1; i <= x; i++) {
        ans *= i;
    }

    return ans;
}

int rec_fact(int x) {
    if(x == 0 || x == 1)
        return 1;
    return x * rec_fact(x-1);
}

int main() {
    int x;
    cin >> x;

    cout << rec_fact(x);


    return 0;
}