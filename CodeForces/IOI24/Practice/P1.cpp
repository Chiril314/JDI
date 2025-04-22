#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addStrings(string a, string b){
    string ans = "";
    int c = 0, i = a.size() - 1, j = b.size() - 1;
    while(i >= 0 || j >= 0 || c){
        int d1 = 0;
        if(i >= 0)
            d1 = a[i--] - '0';

        int d2 = 0;
        if(j >= 0)
            d2 = b[j--] - '0';

        int s = d1 + d2 + c;

        ans += (s % 10) + '0';
        c = s / 10;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    string a, b;
    cin >> a >> b;

    string ans = addStrings(a, b);
    cout << ans;

    return 0;
}