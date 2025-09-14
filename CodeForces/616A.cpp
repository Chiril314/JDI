#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, b;
    cin >> a >> b;

    if(a.length() < b.length()){
        reverse(a.begin(), a.end());
        a.append(b.size() - a.size(), '0');
        reverse(a.begin(), a.end());
    } else if(b.length() < a.length()){
        reverse(b.begin(), b.end());
        b.append(a.size() - b.size(), '0');
        reverse(b.begin(), b.end());
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            cout << '>';
            return 0;
        } else if(a[i] < b[i]){
            cout << '<';
            return 0;
        }
    }

    cout << '=';

    return 0;
}