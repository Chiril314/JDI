#include <iostream>
#include <numeric>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a, k = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        k = gcd(k, a);
    }

	long long ans = 0;
	for(long long i = 1; i * i <= k; i++)
		if(k % i == 0){
		    ans++;
		    if(i != k / i)
                ans++;
		}

	cout << ans;

    return 0;
}