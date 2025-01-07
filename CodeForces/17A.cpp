#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    int primes[1000];
    int primeCount = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            primes[primeCount++] = i;
        }
    }

    int count = 0;
    for (int i = 0; i < primeCount - 1; i++) {
        int sum = primes[i] + primes[i + 1] + 1;
        if (sum <= n && isPrime(sum)) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}