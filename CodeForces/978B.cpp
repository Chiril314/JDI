#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s.substr(i, 3) == "xxx"){
            ans++;
        }
    }
    
    cout << ans;

    return 0;
}