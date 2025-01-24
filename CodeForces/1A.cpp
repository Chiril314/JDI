#include <iostream>

using namespace std;

int main(){
    long long n, m, a, cntN = 0, cntM = 0, cnt;

    cin >> n >> m >> a;

    while(n > 0){
        n = n - a;
        cntN++;
    }

    while(m > 0){
        m = m - a;
        cntM++;
    }

    cnt = cntN * cntM;

    cout << cnt;

   return 0;
}