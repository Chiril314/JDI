#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int s1, s2;
    if(y1 == 0)
        s1 = x1;
    else if(x1 == n)
        s1 = n + y1;
    else if(y1 == n)
        s1 = 3 * n - x1;
    else
        s1 = 4 * n - y1;

    if(y2 == 0)
        s2 = x2;
    else if(x2 == n)
        s2 = n + y2;
    else if(y2 == n)
        s2 = 3 * n - x2;
    else
        s2 = 4 * n - y2;

    int d = abs(s1 - s2);
    cout << min(d, 4 * n - d);

    return 0;
}