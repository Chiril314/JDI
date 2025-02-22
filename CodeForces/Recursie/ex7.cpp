#include <iostream>

using namespace std;

int recursie(int n, int i, int k){
    if(k == 0)
        return 1;

    if(i == k)
        return n;

    return n * recursie(n, i + 1, k);
}

int main(){
    int n, k;
    cin >> n >> k;

    cout << recursie(n, 1, k);

    return 0;
}