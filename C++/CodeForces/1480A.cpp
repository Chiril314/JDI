#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
   	cin >> t;

    while(t--){
        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                if(s[i] == 'a')
                    s[i] = 'b';
                else 
                    s[i] = 'a';
            } else{
                if(s[i] == 'z')
                    s[i] = 'y';
                else 
                    s[i] = 'z';
            }
        }

        cout << s << endl; 
    }

    return 0;
}