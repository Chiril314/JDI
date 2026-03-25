#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSubsequence(string s, string t){
    int i = 0, j = 0;
    while(i < s.size() && j < t.size()){
        if(s[i] == t[j])
            i++;
            
        j++; 
    }

    if(i == s.size())
        return true;
        
    return false;
}

int main(){
    int q;
    cin >> q;
    
    while(q--){
        string s, t, p;
        cin >> s >> t >> p;

        if(!isSubsequence(s, t)){
            cout << "NO" << endl;
            continue;
        }

        vector<int> cntT(26, 0);
        vector<int> cntS(26, 0);
        vector<int> cntP(26, 0);
        
        for(int i = 0; i < t.size(); i++)
            cntT[t[i] - 'a']++;
        
        for(int i = 0; i < s.size(); i++)
            cntS[s[i] - 'a']++;

        for(int i = 0; i < p.size(); i++)
            cntP[p[i] - 'a']++;

        bool flag = true;
        for(int i = 0; i < 26; i++)
            if(cntT[i] > cntS[i] + cntP[i]){
                flag = false;
                break;
            }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}