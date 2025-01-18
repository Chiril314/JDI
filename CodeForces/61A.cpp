#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, ans = "";
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i]){
            ans += "0";
        } else{
            ans += "1";
        }
    }

    cout << ans;
    
    return 0;
}