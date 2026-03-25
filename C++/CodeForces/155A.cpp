#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], minNumber, maxNumber;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    minNumber = a[0];
    maxNumber = a[0];

    int ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > maxNumber){
            maxNumber = a[i];
            ans++;
        }

        if(a[i] < minNumber){
            minNumber = a[i];
            ans++; 
        }
    }

    cout << ans;

    return 0;
}