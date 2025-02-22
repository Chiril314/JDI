#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int b[n];
        for(int i = 0; i < n; i++) 
            cin >> b[i];

        bool sorted = true;
        for(int i = 1; i < n; i++)
            if(a[i] < a[i - 1]){
                sorted = false;
                break;
            }

        if(sorted){
            cout << "YES" << endl;
            continue;
        }

        bool hasZero = false, hasOne = false;
        for(int i = 0; i < n; i++){
            if(b[i] == 0)
                hasZero = true;
            if(b[i] == 1)
                hasOne = true;
        }

        if(hasZero && hasOne){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}