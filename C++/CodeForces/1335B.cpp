#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    string check = "abcdefghijklmnopqrstuvwxyz";

    while (t--){
        int n, a, b;
        cin >> n >> a >> b;

        string pattern = "";

        for(int i = 0; i < b; i++){
            pattern += check[i];
        }

        while(pattern.length() < a){
            pattern += pattern[pattern.length() % b];
        }

        string ans = "";
        for(int i = 0; i < n; i++){
            ans += pattern[i % a];
        }

        cout << ans << endl;
    }

    return 0;
}