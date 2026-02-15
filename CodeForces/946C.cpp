#include <iostream>

using namespace std;

string s;
bool f(int k, char need){
    if(k >= s.size())
        return false;
    
    for(int i = k; i < s.size(); i++)
        if(s[i] <= need){
            s[i] = need;
            if(need == 'z')
                return true;
            
            return f(i + 1, need + 1);
        }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s;

    bool ans = f(0, 'a');
    if(ans)
        cout << s;
    else
        cout << - 1;

    return 0;
}