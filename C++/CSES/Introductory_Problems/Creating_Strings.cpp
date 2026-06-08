#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    vector<int> cnt(26, 0), a = {1, 2, 6, 24, 120, 720, 5040, 40320};

    int x = a[s.size() - 1], y = 1;
    for(int i = 0; i < (int)s.size(); i++)
        cnt[s[i] - 'a']++;

    for(int i = 0; i < 26; i++)
        if(cnt[i] > 1)
            y *= a[cnt[i] - 1];

    cout << x / y << "\n";
    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}