#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    cout << min((n + m) / 3, min(n, m));
    
    return 0;
}