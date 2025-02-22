#include <iostream>

using namespace std;

int main(){
    long long r, g, b;
	cin >> r >> g >> b;
    
	long long Max = max({r, g, b});
	long long s = (r + b + g);
    
	long long ans = min(s / 3, s - Max);
	cout << ans;

    return 0;
}