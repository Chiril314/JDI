#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool flag = false;
        int i = 1, check = 1;
        while(!flag){
            i *= 2;
            check += i;

            if(n % check == 0){
                flag = true;
            }
        }

        cout << n / check << endl;
    }

    return 0;
}