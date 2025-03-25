#include <iostream>
#include <cmath>

using namespace std;

void dToB(int n){
    if(n == 0){
        cout << '0';
        return;
    }

    string ans = "";
    while(n > 0){
        ans = (char)('0' + (n % 2)) + ans;
        n /= 2;
    }

    cout << ans;
}

int main() {
    string s;
    cin >> s;

    int n = stoi(s, nullptr, 2);
    n = sqrt(n);
    
    dToB(n);
    
    return 0;
}