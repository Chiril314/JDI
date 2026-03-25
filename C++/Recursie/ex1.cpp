#include <iostream>

using namespace std;

int recursie(int n){
    if(n == 0)
        return 0;

    return n + recursie(n - 1);
}

int main(){
    int n;
    cin >> n;

    cout << recursie(n);

    return 0;
}