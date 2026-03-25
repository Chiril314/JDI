#include <iostream>

using namespace std;

int recursie(int n){
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return recursie(n - 1) + recursie(n - 2);
}

int main(){
    int n;
    cin >> n;

    cout << recursie(n);

    return 0;
}