#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, a, b;
    cin >> s >> a >> b;

    int n = a.size(), m = b.size();

    int check_a = 0, check_b = 0;
    bool flag = false, both = false;

    for(int i = 0; i < s.size(); i++){
        if(s.substr(i, n) == a){
            check_a++;
            if(check_b == 0){
                flag = true;
            }
            i += n - 1;
        } else if(s.substr(i, m) == b){
            check_b++;
            i += m - 1;
        }
    }

    if(check_a >= 2 || check_b >= 2){

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for(int i = s.size() - 1; i >= 0; i--){
            if(s.substr(i, n) == a){
                both = true;
                break;
            } else if(s.substr(i, m) == b){
                break;
            }
        }

        if(both && flag){
            cout << "both";
            return 0;
        } else if(!both && !flag){
            cout << "both";
            return 0;
        }
    }

    if(flag && check_a == 1 && check_b > 0){
        cout << "forward"; 
    } else if(!flag && check_b == 1 && check_a > 0){
        cout << "backward";
    } else if(check_a == 0 || check_b == 0){
        cout << "fantasy";
    }

    return 0;
}