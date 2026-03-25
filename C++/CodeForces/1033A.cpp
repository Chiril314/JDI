#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a1, a2, b1, b2, c1, c2;
    cin >> n >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    if((b1 < a1 && c1 < a1 || b1 > a1 && c1 > a1) && (b2 < a2 && c2 < a2 || b2 > a2 && c2 > a2))
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}