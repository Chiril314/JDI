#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    bool flag = true;
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length()) {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        if ((isVowel(s[i]) && isVowel(t[i])) || (!isVowel(s[i]) && !isVowel(t[i]))) {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
