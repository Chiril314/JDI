#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n >= 0){
        cout << n;
    } else{
        if((n / 10) > ((int((n / 100)) * 10) + (n % 10))){
            cout << (n / 10);
        } else{
            cout << (int((n / 100)) * 10) + (n % 10);
        }
    }

    return 0;
}