#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size(), x = 0;
        for(char i = '0'; i <= '9'; i++){
            for(char j = '0'; j <= '9'; j++){
                if(i == j){
                    int cnt = 0;
                    for(int k = 0; k < n; k++){
                        if(s[k] == i) 
                            cnt++;
                    }

                    if(cnt > x) 
                        x = cnt;
                } else{
                    int l = 0, flag = 0;
                    for(int k = 0; k < n; k++){
                        if(flag == 0 && s[k] == i){
                            flag = 1;
                            l++;
                        } else if(flag == 1 && s[k] == j){
                            flag = 0;
                            l++;
                        }
                    }

                    if(l % 2 == 1) 
                        l--;

                    if(l > x) 
                        x = l;
                }
            }
        }

        cout << n - x << endl;
    }

    return 0;
}