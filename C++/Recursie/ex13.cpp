#include <iostream>

using namespace std;

int multiplication(int n, int left, int right){
    if(left == right)
        return n;

    return n + multiplication(n, left + 1, right);
}

int main(){
    int n, m;
    cin >> n >> m;

    cout << multiplication(max(n, m), 1, min(n, m));

    return 0;
}