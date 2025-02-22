#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size(), check;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = j; k < n; k++){
                check = s[i] - '0';
                if(check % 8 == 0){
                    cout << "YES\n" << check;
                    return 0;
                }

                if(s[i] - '0' % 8 != 0 && i != j){
                    check = (s[i] - '0') * 10 + s[j] - '0';
                }

                if(check % 8 == 0){
                    cout << "YES\n" << check;
                    return 0;
                }

                if(s[i] - '0' % 8 != 0 && i != j && j != k){
                    check = (s[i] - '0') * 100 + (s[j] - '0') * 10 + s[k] - '0';
                }

                if(check % 8 == 0){
                    cout << "YES\n" << check;
                    return 0;
                }
            }
        }
    }

    cout << "NO";

    return 0;
}