#include <iostream>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int op = 0;
    for(int i = 0; i < n; i++){
        if(op == k){
            for(int i = 0; i < k; i++)
                cout << ')';

            return 0;
        }

        if(s[i] == '('){
            op++;
            cout << '(';
            k--;
        } else{
            op--;
            cout << ')';
            k--;
        }
    }

    return 0;
}