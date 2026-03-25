#include <iostream>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;

    int c1 = t2 * abs(x - z) + t2 * abs(y - x) + t3 * 3;
    int c2 = t1 * abs(x - y);

    if(c2 < c1)
        cout << "NO";
    else
        cout << "YES";
     

    return 0;
}