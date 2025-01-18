#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string ans = "";
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            ans += "I hate ";
        } else{
            ans += "I love ";
        }

        if(i == n){
            ans += "it";
        } else{
            ans += "that ";
        }
    }

    cout << ans;

    return 0;
}