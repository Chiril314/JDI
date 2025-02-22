#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int check = 0, coinsNeeded = 0;
    for(int i = 0; i < n; i++){
        if(i == 0)
            check = a[i];
        else{
            if(a[i] <= check){
                coinsNeeded += check - a[i] + 1;
                a[i] = check + 1;
            }

            check = a[i];
        }
    }

    cout << coinsNeeded;

    return 0;
}