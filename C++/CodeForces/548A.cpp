#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int k, n = s.size();
    cin >> k;

    if(n % k != 0){
        cout << "NO";
        return 0;
    }

    int l = n / k;
    for(int i = 0; i < n; i += l){
        string check = s.substr(i, l);
        string r = check;

        reverse(r.begin(), r.end());
        if(check != r){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}