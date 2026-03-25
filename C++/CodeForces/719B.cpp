#include <iostream>
#include <algorithm>

using namespace std;

int f(string s, string check){
    int cntr = 0, cntb = 0, ans = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != check[i]){
            if(s[i] == 'r'){
                if(cntb > 0){
                    cntb--;
                } else{
                    ans++;
                    cntr++;
                }
            }

            if(s[i] == 'b'){
                if(cntr > 0){
                    cntr--;
                } else{
                    ans++;
                    cntb++;
                }
            }
        }

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s, s1 = "", s2 = "";
    cin >> s;

    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            s1 += 'r';
            s2 += 'b';
        } else{
            s1 += 'b';
            s2 += 'r';
        }        
    }

    int ans1 = f(s, s1), ans2 = f(s, s2);
    cout << min(ans1, ans2);

    return 0;
}