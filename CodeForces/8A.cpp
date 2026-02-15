#include <iostream>

using namespace std;

bool check(string s, string a, string b){
    int n = s.size(), na = a.size(), nb = b.size();

    bool flag1 = false;
    for(int i = 0; i + min(na, nb) <= n; i++)
        if(!flag1 && i + na <= n && s.substr(i, na) == a){
            flag1 = true;
            i += na - 1;
        } else if(flag1 && i + nb <= n && s.substr(i, nb) == b)
            return true;

    return false;
}

int main(){    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, a, b;
    cin >> s >> a >> b;

    bool flag1 = check(s, a, b);

    reverse(s.begin(), s.end());
    bool flag2 = check(s, a, b);

    if(flag1 && flag2)
        cout << "both";
    else if(flag1)
        cout << "forward";
    else if(flag2)
        cout << "backward";
    else
        cout << "fantasy";

    return 0;
}