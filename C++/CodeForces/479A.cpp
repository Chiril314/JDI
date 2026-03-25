#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int check = a + b * c;
    if(a + b + c > check){
        check = a + b + c;
    }

    if(a * (b + c) > check){
        check = a * (b + c);
    }

    if(a * b * c > check){
        check = a * b * c;
    }

    if((a + b) * c > check){
        check = (a + b) * c;
    }

    cout << check;

    return 0;
}