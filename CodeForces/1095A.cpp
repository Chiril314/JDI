#include <iostream>

using namespace std;

int main(){
    int n;
    string t, ans = "";
    cin >> n >> t;

    int temp = n, check = 1;
    while(temp != 0){
        temp -= check;
        if(temp != 0){
            check++;
        }
    }

    int currentLetter = 0;
    for(int i = 1; i <= check; i++){
        ans += t[currentLetter];
        currentLetter += i;
    }

    cout << ans;

    return 0;
}