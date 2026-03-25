#include <iostream>
#include <numeric>

using namespace std;

int main(){
	long long n, m, t;
	cin >> n >> m >> t;

	long long div;
	if(m == 1 || n == 1)
	    div = 1;
	else
	    div = gcd(n, m);
	
	long long an, am;
	an = n / div;
	am = m / div;
	while(t--){
	    long long s1, s2, x1, x2;
		cin >> s1 >> s2 >> x1 >> x2;

		long long k1, k2;
		if(s1 == 1){
			k1 = s2 / an;
			if(s2 % an != 0)
                k1++;
		} else{
			k1 = s2 / am;
			if(s2 % am != 0)
                k1++;
		}

		if(x1 == 1){
			k2 = x2 / an;
			if(x2 % an != 0)
				k2++;
		} else{
			k2 = x2 / am;
			if(x2 % am != 0)
				k2++;
		}
        
        if(k1 == k2)
            cout << "YES\n";
        else
            cout << "NO\n";
	}

    return 0;
}