#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if((n / 2) % 2 == 1){
            cout << "NO" << endl;
        } else{ 
            cout << "YES" << endl;
            int a[n], check = 0;

            for(int i = 0; i < n / 2; i++){
                a[i] = (i + 1) * 2;
                check += (i + 1) * 2;
            }

            for(int i = (n / 2); i < n; i++){
                if(i == n / 2){
                    a[i] = 1; 
                    check -= 1;
                } else if(i == n - 1){
                    a[i] = check;
                } else{
                    a[i] = a[i - 1] + 2;
                    check -= a[i];
                }
            }

            for(int i = 0; i < n; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}