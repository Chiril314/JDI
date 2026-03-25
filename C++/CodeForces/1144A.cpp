#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        bool flag = true;
        for(int i = 1; i < s.size(); i++)
            if(s[i] != s[i - 1] + 1)
                flag = false;

        if(flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}