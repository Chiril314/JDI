#include <iostream>

using namespace std;

int recursie(int n){
    if(n == 0 || n == 1)
        return 1;

    return n * recursie(n - 1);
}

int main(){
    int n;
    cin >> n;

    cout << recursie(n);

    return 0;
}