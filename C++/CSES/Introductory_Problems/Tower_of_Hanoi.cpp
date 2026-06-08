#include <iostream>

using namespace std;

void f(int n, int from, int aux, int to){
    if(n == 0)
        return;

    f(n - 1, from, to, aux);
    cout << from << ' ' << to << "\n";
    f(n - 1, aux, from, to);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    cout << (1 << n) - 1 << "\n";
    f(n, 1, 2, 3);

    return 0;
}