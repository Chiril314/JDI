#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int recruits = 0, crimes = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            recruits += a[i];
        }
        if(a[i] == -1){
            if(recruits == 0){
                crimes++;
            } else if(recruits >= 0){
                recruits--;
            }
        }
    }

    cout << crimes;

    return 0;
}