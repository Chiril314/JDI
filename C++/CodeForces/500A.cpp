#include <iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    int a[n];
    for(int i = 1; i < n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i += 0){
        if(i == t){
            cout << "YES";

            return 0;
        }  else if(i > t){
            cout << "NO";
            
            return 0;
        } else{
            i += a[i];
        }
    }

    cout << "NO";

    return 0;
}