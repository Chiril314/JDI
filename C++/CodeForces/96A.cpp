#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt = 0;
    bool flag = false;
    string s;

    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(i==0){
            cnt++;
        } else if(s[i]==s[i-1]){
            cnt++;
            if(cnt >= 7){
                flag = true;
            }
        } else{
            cnt = 1;
        }
    }

    if(flag == true){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}