#include <iostream>

using namespace std;

int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    if(n == 1 && k >= 1){
        cout << 0;

        return 0;
    } else if(n >= 2){
        for(int i = 0; i < n; i++){
            if(i == 0 && s[i] != '1' && k > 0){
                s[i] = '1';
                k--;
            } else if(i > 0 && s[i] != '0' && k > 0){
                s[i] = '0';
                k--;
            }
        }
    }

    cout << s;

    return 0;
}