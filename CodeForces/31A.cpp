#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(a[i] == a[j] + a[k] && j != k){
                    cout << i + 1 << ' ' << j + 1 << ' ' << k + 1;

                    return 0; 
                }
            }
        }
    }

    cout << -1;

    return 0;
}