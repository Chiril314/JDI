#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.length();
    if(n < 26){
        cout << -1;
        return 0;
    }
    
    for(int i = 0; i <= n - 26; i++){
        int letterCount[26] = {0};
        int questionMarks = 0;

        for(int j = 0; j < 26; j++){
            char c = s[i + j];
            if(c == '?'){
                questionMarks++;
            } else{
                letterCount[c - 'A']++;
            }
        }

        bool valid = true;
        int missingLetters = 0;
        for(int k = 0; k < 26; k++){
            if(letterCount[k] > 1){
                valid = false;
                break;
            }

            if(letterCount[k] == 0){
                missingLetters++;
            }
        }

        if(valid && questionMarks >= missingLetters){
            bool used[26] = {false};
            for(int k = 0; k < 26; k++){
                char c = s[i + k];
                if(c != '?'){
                    used[c - 'A'] = true;
                }
            }

            char nextLetter = 'A';
            for(int k = 0; k < 26; k++){
                if(s[i + k] == '?'){
                    while(used[nextLetter - 'A']){
                        nextLetter++;
                    }

                    s[i + k] = nextLetter;
                    used[nextLetter - 'A'] = true;
                }
            }

            for(int k = 0; k < n; k++){
                if (s[k] == '?'){
                    s[k] = 'A';
                }
            }

            cout << s;
            return 0;
        }
    }

    cout << -1;

    return 0;
}