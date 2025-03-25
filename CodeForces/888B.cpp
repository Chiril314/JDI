#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int up = 0, down = 0, left = 0, right = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'U')
            up++;
        else if(s[i] == 'D') 
            down++;
        else if(s[i] == 'L') 
            left++;
        else if(s[i] == 'R')
            right++;
    }

    int ans = 2 * min(up, down) + 2 * min(left, right);

    cout << ans;

    return 0;
}