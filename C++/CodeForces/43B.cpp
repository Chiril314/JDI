#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int line1Cnt[26], line2Cnt[26], Line1Cnt[26], Line2Cnt[26];
    for(int i = 0; i < 26; i++){
        line1Cnt[i] = 0;
        line2Cnt[i] = 0;
        Line1Cnt[i] = 0;
        Line2Cnt[i] = 0;
    }

    string line1, line2;

    for(int i = 0; i < s1.size(); i++){
        if(s1[i] != ' '){
            line1 += s1[i];
        }
    }

    for(int i = 0; i < s2.size(); i++){
        if(s2[i] != ' '){
            line2 += s2[i];
        }
    }

    int x;
    for(int i = 0; i < line1.size(); i++){
        if(line1[i] - 'A' < 26){
            x = line1[i] - 'A';
            Line1Cnt[x]++;
        } else{
            x = line1[i] - 'a';
            line1Cnt[x]++;
        }
    }

    for(int i = 0; i < line2.size(); i++){
        if(line2[i] - 'A' < 26){
            x = line2[i] - 'A';
            Line2Cnt[x]++;
        } else{
            x = line2[i] - 'a';
            line2Cnt[x]++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(line2Cnt[i] > line1Cnt[i]){
            cout << "NO";

            return 0;
        }

        if(Line2Cnt[i] > Line1Cnt[i]){
            cout << "NO";

            return 0;
        }
    }

    cout << "YES";

    return 0;
}