#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int occurence[26] = {0};
    for(int i = 0; i < s.size(); i++)
        occurence[s[i] - 'a']++;

    int cnt2 = 0; 
    for(int i = 0; i < 26; i++)
        if (occurence[i] % 2 == 1)
            cnt2++;

    if(cnt2 % 2 == 1 || cnt2 == 0)
        cout << "First";
    else
        cout << "Second";

    return 0;
}