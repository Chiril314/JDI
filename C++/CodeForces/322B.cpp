#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int r, g, b;
    cin >> r >> g >> b;

    int ans1 = r / 3 + g / 3 + b / 3, ans2 = 0, ans3 = 0;
    if(r > 0 && g > 0 && b > 0)
        ans2 = 1 + (r - 1) / 3 + (g - 1) / 3 + (b - 1) / 3;
    
    if(r > 1 && g > 1 && b > 1)
        ans3 = 2 + (r - 2) / 3 + (g - 2) / 3 + (b - 2) / 3;
    
    cout << max({ans1, ans2, ans3});

    return 0;
}