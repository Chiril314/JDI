#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long b[n];
    cin >> b[0];

    long long check1 = b[0], check2 = b[0];
    long long cnt1 = 1, cnt2 = 1;

    for(long long i = 1; i < n; i++){
        cin >> b[i];

        if(b[i] < check1){
            check1 = b[i];
            cnt1 = 1; 
        } else if(b[i] == check1)
            cnt1++;

        if(b[i] > check2){
            check2 = b[i];
            cnt2 = 1; 
        } else if(b[i] == check2)
            cnt2++;
    }

    if(check1 == check2)
        cout << 0 << " " << (n * (n - 1)) / 2 << endl; 
    else
        cout << check2 - check1 << " " << cnt1 * cnt2 << endl;

    return 0;
}