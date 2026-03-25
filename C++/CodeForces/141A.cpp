#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string target = s1 + s2;

    if(target.size() != s3.size()){
        cout << "NO";
        return 0;
    }

    int cnt[26] = {0};

    for(int i = 0; i < target.size(); i++){
        cnt[target[i] - 'A']++;
    }
    
    for(int i = 0; i < s3.size(); i++){
        if(cnt[s3[i] - 'A'] == 0){
            cout << "NO";
            return 0;
        }
        cnt[s3[i] - 'A']--;
    }

    cout << "YES";

    return 0;
}