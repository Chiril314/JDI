#include <iostream>

using namespace std;

int main(){
    long long n, l, r;
    cin >> n >> l >> r;

    long long minArray = 0, maxArray = 0;
    long long check = 1;
    for(long long i = 0; i < n; i++)
        if(i < n - l + 1)
            minArray += check;
        else{
            check *= 2;
            minArray += check;
        }

    check = 1; 
    long long cntCheck = 1;
    for(long long i = 0; i < n; i++)
        if(cntCheck < r){
            maxArray += check;
            check *= 2;
            cntCheck++;
        } else if(cntCheck == r){
            maxArray += check;
            cntCheck++;
        } else
            maxArray += check;

    cout << minArray << ' ' <<maxArray;

    return 0;
}