#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s, t;
        cin >> s >> t;

        int i = 0, j = 0;
        bool flag = true;

        while(j < t.size()){
            if(i < s.size() && s[i] == t[j]){
                i++;
                j++;
            } else if(j > 0 && t[j] == t[j - 1])
                j++;
            else{
                flag = false;
                break;
            }
        }

        if(i < s.size())
            flag = false;

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}