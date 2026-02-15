#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    cout << s;

    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}