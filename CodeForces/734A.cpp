#include <iostream>
#include <string>

using namespace std;

int main(){
    double n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            cnt++;
        }
    }
    
    if(cnt > n / 2){
        cout << "Anton";
    } else if(cnt < n / 2){
        cout << "Danik";
    } else if(cnt == n / 2){
        cout << "Friendship";
    }
    

    return 0;
}