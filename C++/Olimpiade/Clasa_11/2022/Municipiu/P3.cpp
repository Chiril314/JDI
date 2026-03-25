#include <iostream>
#include <vector>

using namespace std;

int value(char c){
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    
    return 1000;
}

int transform(string s){
    int n = s.size(), ans = 0;
    reverse(s.begin(), s.end());

    int last;
    for(int i = 0; i < n; i++){
        int val = value(s[i]);
        if(i == 0){
            ans += val;
            last = val;
        } else{
            if(val < last)
                ans -= val;
            else
                ans += val;
        }
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int start = 0, ans = 0, cnt = 0, lch = 0, nch = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '+' || s[i] == '-' || i == s.size() - 1){
            string c = s.substr(start, i - start);
            if(i == s.size() - 1)
                c = s.substr(start, i - start + 1);

            int val = transform(c);

            if(s[i] == '+')
                nch = 1;
            else if(s[i] == '-')
                nch = -1;

            if(cnt == 0){
                ans = val;
                cnt++;
            } else{
                if(lch == 1)
                    ans += val;
                else if(lch == -1)
                    ans -= val;
                
                cnt++;
            }

            lch = nch;
            start = i + 1;
        }

    cout << ans;

    return 0;
}