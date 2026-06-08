#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26, 0);
    for(int i = 0; i < s.size(); i++)
        cnt[s[i] - 'A']++;

    bool flag = false;
    for(int i = 0; i < 26; i++){
        if(cnt[i] % 2 == 1){
            if(!flag)
                flag = true;
            else{
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    string first = "", add = "", last;
    for(int i = 0; i < 26; i++){
        if(cnt[i] % 2 == 0){
            first += string(cnt[i] / 2, ('A' + i));
        } else{
            add = string(cnt[i], 'A' + i);
        }
    }

    last = first;
    reverse(last.begin(), last.end());

    cout << first << add << last;

    return 0;
}