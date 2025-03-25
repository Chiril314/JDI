#include <iostream>
#include <vector>

using namespace std;

int main(){
    int q;
    cin >> q;

    while(q--){
        string s, t;
        cin >> s >> t;

        vector<int> cntS(26, 0);
        vector<int> cntT(26, 0);

        for(int i = 0; i < s.size(); i++){
            cntS[s[i] - 'a']++;
            cntT[t[i] - 'a']++;
        }

        bool flag = false; 
        for(int i = 0; i < 26; i++)
            if(cntS[i] > 0 && cntT[i] > 0){  
                flag = true;
                break;
            }
            

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}