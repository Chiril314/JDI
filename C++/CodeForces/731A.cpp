#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int check = 0, ans = 0;

    for(int i = 0; i < s.size(); i++){
        if(i == 0){
            check = min(26 - abs(s[i] - 'a'), abs(s[i] - 'a'));
        } else{
            check = min(26 - abs(s[i] - s[i - 1]), abs(s[i] - s[i - 1]));;
        }
        ans += check;
    }

    cout << ans;

    return 0;
}