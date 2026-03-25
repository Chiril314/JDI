#include <iostream>

using namespace std;

int main(){
    string n;
    cin >> n;

    string ans = "";
    for(int i = 0; i < n.size(); i++)
        ans += n[i];

    for(int i = n.size() - 1; i >= 0; i--)
        ans += n[i];

    cout << ans;

    return 0;
}