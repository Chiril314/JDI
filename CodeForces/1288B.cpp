#include <iostream>

using namespace std;

long long ans(long long n){
    long long a = 0;
    while(n > 0){
        a++;
        n /= 10;
    }

    return a;
}

int main(){
    int t;
    cin >> t;

    while(t--){
		long long a, b;
		cin >> a >> b;

		cout << a * (ans(b + 1) - 1) << endl;
    }

    return 0;
}