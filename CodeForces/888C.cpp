#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size(), ans = n + 1;  

    for(int i = 0; i < 26; i++){
        char c = 'a' + i;

        vector<int> pos;
        for(int j = 0; j < n; ++j)
            if(s[j] == c)
                pos.push_back(j);

        if(pos.size() == 0) 
            continue;

        int dist = 0;

        dist = max(dist, pos[0] + 1);
        for(int j = 1; j < pos.size(); j++)
            dist = max(dist, pos[j] - pos[j - 1]);

        dist = max(dist, n - pos.back());
        if(dist < ans){
            ans = dist;
        }
    }

    cout << ans;

    return 0;
}